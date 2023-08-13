#include <stdio.h>

int main(void) 
{
	long num = 30;   // long타입 변수 선언 및 30 저장
	long *numPt;     // 포인터 변수 선언 

	numPt = &num;    // 포인터 변수에 num의 메모리 주소를 저장

	*numPt = 70;     // *로 메모리 주소에 접근해 70을 저장

	printf("%d\n", *numPt);   // 70 : *(역참조 연산자)로 메모리 주소에 접근해 값을 가져옴
	printf("%d\n", num);      // 70 : 실제 num의 값도 바뀜

	return 0;
}
