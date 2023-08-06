#include <stdio.h>
#include <math.h>   // pow(), abs() 등의 수학 관련 함수들을 사용하기 위한 라이브러리


int main(void)
{

	/* 관계 연산자 */

	int x = 50, y = 50;
	// x와 y가 같은 값을 가지고 있는가?
	// x = y -> x와 y가 같은 상황 그 자체를 의미
	// x == y --> true. x와 y가 같은 값을 가지고 있는 것

	printf("x와 y가 같은가? %d\n", x == y);   // c언어에서는 내부적으로 false가 0, true가 1
	printf("x와 y가 다른가? %d\n", x != y);
	printf("x가 y보다 큰가? %d\n", x > y);
	printf("x가 y보다 작은가? %d\n", x < y);
	// printf("x에 y을 넣으면? %d\n", x = y);    // c언어에서는 특정한 변수에 값을 대입할 때 그 변수를 왼쪽에, 값은 오른쪽에 쓴다.
												// y의 값이 x로 들어가고, x가 가진 값이 %d로 출력됨.


	if (x == y)
	{
		printf("\n참이여요. \n");
	}
	else
	{
		printf("\n거짓이여요.\n");
	}


	/* 논리 연산자 and, or, not */
	
	int a = 66, b = 33;
	printf("x가 y보다 크고(and) y는 40미만입니까? %d\n", (a > b) && (b < 40));   // true면 %d에 1, false면 %d에 0 반환.
	printf("x가 y보다 작거나(or) y가 33입니까? %d\n", (a > b) || (b == 33));
	printf("x가 66입니까? %d\n", a != 66); // x가 66이 아니라면 true 반환


	/* 조건 연산자  -   조건 ? 참 : 거짓 */
	int p = -50, u = 20;
	int absolX = (p > 0) ? p : -p;   // ? 앞이 true면 p를, false면 -p를 반환
	int max = (p > u) ? p : u;
	int min = (p < u) ? p : u;

	printf("absolX의 절대값은 %d입니다.\n", absolX);
	printf("x와 y중 최댓값은 %d입니다.\n", max);
	printf("x와 y중 최솟값은 %d입니다.\n", min);


	/* 거듭제곱 연산함수 pow() */

	double n = pow(2.0, 20.0);
	printf("\n2의 20제곱은 %.f입니다.\n", n);  // %.0f도 같은 값



	return 0;
}