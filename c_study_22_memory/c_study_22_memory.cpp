#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

/* 동적메모리 */
// 어떠한 메모리를 유연하고 체계적으로 관리할 수 있는 방식
// 반드시 free 함수를 이용해서 반납까지 해주어야 함
// 포인터를 이용해서 동적 메모리를 효과적/체계적으로 관리할 수 있다


/* 구조체의 동적 메모리 할당 */
struct Book
{
	int num;
	char title[100];
};


void showBook(Book* p, int n)  // Book이라는 구조체를 동적 메모리에 할당한 포인터 변수 자체, n = 책의 갯수
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("번호 %d : %s\n", (p + i)->num, (p + i)->title);
	}
}


int main()
{
	Book *p;
	p = (Book *)malloc(2 * sizeof(Book));
	if (p == NULL)
	{
		printf("동적 메모리 할당에 실패했씁니다.");
		exit(1);
	}

	// 구조체의 특정한 내부 변수에 접근 하는 방법은 p.num 이었지만
	// 구조체 포인터의 경우, '->' 로 해당 변수에 접근함
	p->num = 1;
	strcpy_s(p->title, "C programming");
		   // => 구조체 변수 초기화


	// p가 가리키는건 두개의 공간 중, 첫번째 구조체 변수에 해당하는 거고,
	// p+1이 가리키는건 두번째 구조체 변수에 해당하는 것
	(p + 1)->num = 2;
	strcpy_s((p + 1)->title, "Data structure");

	showBook(p, 2);
	free(p);

	return 0;
}
