#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 2;

	printf("x = %d입니다. \n", x);
	printf("y = %d입니다. \n", y);

	printf("x + y = %d입니다. \n", x + y);
	printf("x - y = %d입니다. \n", x - y);
	printf("x * y = %d입니다. \n", x * y);
	printf("x / y = %.1f입니다. \n", (double)x / (double)y);  // 2개의 정수를 나누기를 하고 그 결과를 int형으로 출력하면 몫만 보여줌.


		return 0;
}
