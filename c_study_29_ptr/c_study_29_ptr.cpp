#include <stdio.h>


/* 포인터 변수의 값 바꿔보기 */
int main()
{
	int i = 10;
	int* p;

	p = &i;   // p를 i의 주소로 초기화 -> 포인터 p가 가리키는 값이 i가 됨
	printf("i = %d\n", i);  // 10 출력
	*p = 20;  // 포인터 p가 가리키는 값을 20으로 바꿔주면,
	printf("i = %d\n", i);  // 20 출력

	return 0;
}