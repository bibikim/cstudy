#include <stdio.h>


// 포인터 변수의 값을 바꿔보기
int main(void)
{
	int i = 10;
	int *p;  // -> *p가 가리키는 값은 i가 됨
	p = &i;  // p는 i의 주소값으로 매칭시켜 초기화
	printf("i = %d\n", i); // i 출력

	*p = 20; // 포인터p가 가리키는 값을 20으로 바꾸고 i 출력
	printf("i = %d\n", i);

	return 0;

}