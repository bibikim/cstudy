#include <stdio.h>
#define MONTHS 12	// 상수에 대한 정의. 이미 정해진 수학적 법칙 같은 것은 상수로 정의. 

// #define 
// java의 final 같이 프로그램이 수행되는 시점에 이 변수는 이 값이다라고 고정하는 선언.
// MONTHS에 메모리를 12만큼 할당해주겠단 의미.

// C언어 자료형

// 문자열 : char
// 실수 : float, double
// 자료형이 필요 없을 때(함수 작성 시) : void

// c언어에서의 문자 표현 - char
// c언어에서의 숫자 표현 - int, float, double

int main(void)
{

	/* double */
	double monthSal = 1000.5;
	printf("$ %.2f\n", monthSal * MONTHS);


	/* char */
	char x = 'A';
	printf("%c\n", x); // %c = 하나의 char형을 출력하겠다
	// 특징 : c언어에서의 char형은 내부적으로는 숫자를 이용해서 운용되고 있음. 아스키코드
	char y = 65;
	printf("%c\n", y);


	int a = 68;
	printf("%c\n", a);   // 출력형태(%c)가 char형이기 때문에 알아서 char형으로 출력4

	char b = 68;
	printf("%c\n", b);

	char c = 'D';
	printf("%c\n", c);
	printf("%d\n", c);   // 대문자 D는 아스키코드에 따르면 정수 68이기 때문에 68이 출력됨. 
						 // 자유자재로 int형과 char형을 바꿀 수 있음!


	// 10진수, 8진수
	int e = 100;
	printf("10진수로 출력 : %d\n", e);
	printf("8진수로 출력 : %o\n", e);	
	printf("16진수로 출력 : %x\n", e);
	// int 자료형은 출력 양식에 따라 다른 진법으로도 표현 가능하다.

	return 0;
}