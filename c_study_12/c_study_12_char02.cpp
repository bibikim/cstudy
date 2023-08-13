

#include <iostream>
#define LEN_CNT   2
#define LEN_VAL   5


int main(void)
{


	char val1[5] = "abc";
	char val2[5] = "abge";

	char val3[5];
	printf("%p\n", val3);
	printf("%d\n", val3);
	memset(val3, 0x00, LEN_VAL);
	printf("%d\n", val3);
	printf("%p\n", val3);

	/* strcmp 함수  :  strcmp(char1, char2) */
		// strcmp(char1, char2) == 0  비교하는 두 문자열이 같으면 0을 반환하는 strcmp함수
		// !strcmp(char1, char2)      0이 아닌 경우(-1, 1) 두 문자열이 다르다고 판단
		// ASCII코드로 같은 값인지 아닌지 판단함
	if (strcmp(val1, val2) == 0)
	{
		printf("%s와 %s는 같은 문자열입니다.\n", val1, val2);
	}
	else
	{
		printf("%s와 %s는 다른 문자열입니다.\n", val1, val2);
	}


	/* strncmp 함수  :  strncmp(char1, char2, cnt) */
		// strncmp함수는 지정한 사이즈만큼 두 문자열을 비교함. char1과 char2를 cnt길이만큼 문자열 비교
		// strncmp(char1, char2, cnt) == 0  비교하는 두 문자열이 cnt길이 까지 같으면 0을 반환하는 함수
		// !strncmp(char1, char2, cnt)      0을 반환하지 않는 경우(-1, 1) cnt길이까지 비교했을 때 다른 문자열이 있는 것
	if (!strncmp(val1, val2, LEN_CNT))
	{
		printf("%s와 %s는 같은 문자열입니다.\n", val1, val2);
	}
	else
	{
		printf("%s와 %s는 다른 문자열입니다.\n", val1, val2);
	}

	return 0;
}

