﻿#include <stdio.h>
#include <stdlib.h>


/* 동적 메모리로 알파벳 출력하기 */
int main()
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
			// 하나의 문자가 들어갈 수 있는 공간을 만들어줌
			// * 100 = 총 100개의 문자가 pc포인터를 이용해 들어갈 수 있게 됨
			// 사실상 배열과 동일. 배열도 특정 자료형을 총 몇개만큼 들어갈 수 있는 공간으로 초기화 해주기 때문에

	if (pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다. \n");
		exit(1);
	}

	/* pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자 삽입 */
	for (i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}

	/* 아스키 코드에서 0은 NULL을 의미. 즉 마지막 문자로 NULL을 넣어주기 */
	*(pc + i) = 0;  // 문자열 포인터 종료!
	// c언어에서 문자열은 문자의 배열로 표현이 됨. 문자가 들어가다가 마지막에 null을 만나면 문자열의 종료를 의미

	printf("%s\n", pc); // a - z 출력
	free(pc);  // 동적메모리 할당 해제  -> a-z가 들어간 위치에 해당하는 부분을 다 해제. 프로그램 상에서 다시 어떠한 변수를 위한 메모리 공간으로 사용 가능해짐


	/*
		특정 공간 100개 만큼 차지하는 와중에, 첫번째 char형에 해당하는 공간이 pc가 가리키는 주소값이 됨.
		*(pc + 0)     ---> 첫번째 공간에 들어있는 특정 값 자체를 의미            == pc[0]
		*(pc + 1) ---> 첫번째 값에 해당하는 주소의 다음번째 주소에 해당하는 값   == pc[1]
		*(pc + 2)																 == pc[2]
		
		------------------ 동적 메모리를 이용한 배열 관리의 대표적 예제 ------------------
	*/

	return 0;
}