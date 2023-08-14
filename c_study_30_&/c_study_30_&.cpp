#include <stdio.h>
#include <string.h>

#define LEN_NAME  15
#define _CRT_SECURE_NO_WARNINGS


/*
	memset(void *ptr, int value, size_t num)
	 -> ptr로 시작하는 메모리 주소부터 num개의 바이트를 value값으로 채운다

	포인터 변수를 이용해서 해당 주소가 가리키는 값을 사용자가 원하는 값으로 변경 가능
	주로 메모리 공간에 남아있을 쓰레기값을 없애고 초기화 목적으로 사용 -> 0 혹은 NULL 값!

	==> 메모리 관리를 엄격하게 할 수 있음!
*/

int main()
{
	int i = 0;

	// name이라는 변수에 15byte 크기 할당
	char name[LEN_NAME];

	// name의 크기 출력
	printf("%d\n", sizeof(name));

	// name 출력 <- 쓰레기값 들어가 있음
	printf("%s\n", name);

	// name의 크기만큼 반복문 돌려서 name에 들어있는 쓰레기값 초기화(memset)
	for (i = 0; i < sizeof(name); i++)
	{
		memset(&name, 0x00, LEN_NAME);

		// 0x00(null)이 들어갔음
		printf("%s\n", name[i]);
	}

	// 초기화 됐는지 확인 (빈 칸으로 초기화 완료)
	printf("dd %s\n", name);

	// name 변수에 문자열 복사해서 값 집어넣기
	strncpy_s(name, "troye sivan", LEN_NAME);
	strncpy_s(name, "abcdefghijklmn", LEN_NAME);
	printf("%s \n", name);

	// memset으로 초기화하지 않아도 정상적으로 들어가나,
	// 혹시 모르는 상황에 대비하여 char타입/long 타입 배열의 경우, 초기화는 해주는 것이 좋다
	char title[LEN_NAME];
	printf("%s \n", title);
	strncpy_s(title, "red velvet", LEN_NAME);
	printf("%s \n", title);


	return 0;
}

