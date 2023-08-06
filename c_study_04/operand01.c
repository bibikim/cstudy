#include <stdio.h>
#define SECOND_PER_MINUTE 60


int main(void)
{
	/* 몫과 나머지를 구하는 모듈 연산자 /, % */

	int inputSc = 1000;
	int minute = inputSc / SECOND_PER_MINUTE;
	int second = inputSc % SECOND_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다.\n", inputSc, minute, second);
	

	/* 증감 연산자++, -- */ 
	int x = 0;
	printf("현재 x는 %d입니다.\n", x);
	x++;
	printf("현재 x는 %d입니다.\n", x);
	printf("현재 x는 %d입니다.\n", x--);  // 출력 후에 증감이 이루어짐
	printf("현재 x는 %d입니다.\n", x);    // x--가 수행되고 난 후의 x를 출력.

	printf("현재 x는 %d입니다.\n", --x);  // 증감이 앞에서 이루어지기 때문에 이루어진 후에 값이 출력.


	/* 복합 대입연산자 */
	int q = 100;
	printf("q는 %d입니다.\n", q);

	q += 50;  // q = q + 50;
	printf("q는 %d입니다.\n", q);

	q -= 50;
	printf("q는 %d입니다.\n", q);

	q *= 50;
	printf("q는 %d입니다.\n", q);

	q /= 50;
	printf("q는 %d입니다.\n", q);

	q %= 50;
	printf("q는 %d입니다.\n", q);



	return 0;
}
