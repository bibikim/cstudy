#include <stdio.h>


// 포인터 변수의 값을 바꿔보기
int main1(void) 
{
	int i = 10;
	int* p;
	p = &i;  // p는 i의 주소값으로 매칭시켜 초기화
	printf("i = %d\n", i);
	*p = 20;
	printf("i = %d\n", i);



	return 0;

}