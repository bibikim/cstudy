#include <stdio.h>
#include <stdlib.h>


/* 동적 메모리로 정수 5개 처리하기 */
int main()
{
	int* pi, i;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.");
		exit(1);
	}

	// 배열과 포인터를 이용한 동적메모리 할당은 매우 밀접함

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(pi + i));
		// 포인터 주소를 하나씩 증가시켜 나가면서 거기에 해당하는 위치의 값을 출력할 수 있도록 함.
	}
	free(pi);



	/*
		pi = (int*)malloc(5 * sizeof(int));
		pi는 특정 포인터 변수. 
		ram이 있다고 가정했을 때, 총 5개의 int형이 들어갈 수 있는 공간이 할당 되는데
		그 중 첫번째에 해당하는 메모리 주소를 pi라는 포인터 변수가 가지게 된다.

		pi[0] -> 첫번째로 가리키고 있는 변수의 위치에 해당하는 값이 있으면 그 값에 100을 넣어준 것

		pi[0] = *(pi + 0)
		pi[1] = *(pi + 1)
		......
	
	*/

	return 0;
}

