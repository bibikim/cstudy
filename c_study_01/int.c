#include<stdio.h>
#include<limits.h>  // INT_MAX를 사용하기 위한 헤더파일 추가



int main(void)
{
	int x;
	x = 50;
	printf("%d\n", x);   // %d : 이 자리에는 int형의 값(변수 x)이 들어간다.
	printf("변수 x의 메모리 크기는 %d입니다.\n", sizeof(x));  // sizeof : 변수의 메모리 크기가 얼마나 되는지 알려주는 함수
															// 자료형이 int면 무조건 4바이트만큼 차지함. 변수 하나가 차지하는 위치가 4바이트

	float y = 12111234.123456789;  // float은 표현할 수 있는 범위가 좁음. 4바이트만큼 밖에 보여주지 못해서 쓰레기값이 나옴.
	double z = 12111234.123456789; // double은 8바이트를 차지 때문에 정확하게 표현해줌.
	printf("y = %.2f\n", y); // 실수 출력 : %.2f 소수점 2번째 자리까지만 출력하겠다.  --> 12111234.00을 출력
	printf("z = %.2f\n", z); //  --> 12111234.12을 출력


	// overflow : 한계를 넘어서서 값이 초과되는 것을 의미
	int a = INT_MAX;
	printf("int형의 최댓값 a는 %d입니다. \n", a);

	return 0;

}