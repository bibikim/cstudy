#include <stdio.h>

/* 반복함수*/


// 반복함수를 이용해서 숫자 피라미드를 출력합니다.
// 반복함수는 for문과 while문으로 구성
int print(int a)
{
	int i, j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}

	return 0;
}

int main(void)
{
	int a;
	a = 10;
	print(a);
	return 0;
}
