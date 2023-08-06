#include <stdio.h>
#define N 10
#define M 20


int main(void)
{

	/* 반복문    while문,for문 */


	// while문 - 1부터 1000까지의 합
	int i = 1, sum = 0;

	while (i <= 1000)  // ()안에 내용이 true일 경우에 {}안을 반복해서 실행
	{
		sum = sum + i;
		i++;
	}

	printf("1부터 1000까지의 합은 %d이다. \n\n", sum);


	// for문 - 사각형 출력하기
	int j, k;

	for (j = 0; j < N; j++)
	{
		for (k = 0; k < N; k++)
		{
			printf("* ");   // 100개 출력
		}
		printf("\n");  // *이 10개 출력되고 줄바꿈, 10개 출력되고 줄바꿈 ....... 10번 반복
	}


	// for문 - 피라미드 출력하기
	int n, m;

	for (n = 0; n < M; n++)   // 20번 반복
	{
		for (m = M - n - 1; m > 0; m--)
		{
			printf("  ");
		}
		for (m = 0; m < n; m++)
		{
			printf("* ");
		}
		for (m = 0; m < n - 1; m++)
		{
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}