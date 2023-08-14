#include <stdio.h>


int main()
{
	int x = 65;
	printf("%c\n", x);

	char y = 65;
	printf("%c\n", y);
	
	char z = 'B';
	printf("%d\n%c\n", z, z);
	

	int a = 100;
	printf("10진수로 출력 : %d\n", a);
	printf("8진수로 출력 : %o\n", a);  // 1 2 3 4 5 6 7 10 11 12
	printf("16진수로 출력 : %x\n", a);


	/*------------------------------*/

	int score = 85;  // 학생의 점수
	if (score >= 90)
	{
		printf("당신의 학점은 A입니다.");
	}
	else if (score >= 80)
	{
		printf("학점 B");
	}
	else if (score >= 10)
	{
		printf("학점 C");
	}
	else
	{
		printf("학점 F 낙제 돌아가");
	}

	return 0;
}