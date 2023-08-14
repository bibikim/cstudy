
#include <stdio.h>
#include <limits.h>

int main()
{
	int x;
	x = 5;
	printf("변수 x의 메모리 크기는 %d", sizeof(x));

	int y = INT_MAX;
	printf("int형의 최댓값 : %d \n", y);
	printf("y + 1은 %d \n", y + 1);
	// 최대값에 + 1을 하니 int형이 가질 수 있는 최소값으로 돌아가버림 == 오버플로우

	int a = 10;
	int b = 20;
	printf("a = %d입니다 \n", a);
	printf("b = %d입니다 \n", b);

	printf("a + b = %d입니다 \n", a + b);
	printf("a - b = %d입니다 \n", a - b);
	printf("a * b = %d입니다 \n", a * b);
	printf("a / b = %d입니다 \n", a / b);


	char max = CHAR_MAX;  // 127 - 아스키코드 끝 번호가 127임
	char num1 = 127;
	char num2 = 256;

	printf("char타입의 최대값 : % d \n % d % d ", max, num1, num2);




}
