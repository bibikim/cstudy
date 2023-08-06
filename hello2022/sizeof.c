#include<stdio.h>

int main_int(void)
{
	int x;
	x = 5;
	printf("%d", x);   // %d : 이 자리에는 int형의 값(변수 x)이 들어간다.
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));  // sizeof : 변수의 메모리 크기가 얼마나 되는지 알려주는 함수
															// 자료형이 int면 무조건 4바이트만큼 차지함. 변수 하나가 차지하는 위치가 4바이트


	return 0;

}