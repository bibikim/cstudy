#include <stdio.h>
#include <string.h>

#define CNT 5
#define _CRT_SECURE_NO_WRNINGS

/* 구조체의 배열 */

struct student
{
	int num;
	char name[10];
	double gpa;

} typedef stu;


int main()
{
	stu list[CNT];    // 학생 구조체를 list라는 배열로 만들어 준다.
	int i;
	
	// 데이터 입력
	for (i = 0; i < CNT; i++)
	{
		// 구조체의 각 idx에 해당하는 학생의 학번/이름/학점을 입력받을 수 있도록 세팅
		printf("학번을 입력하세요 : ");
		scanf_s("%d", &list[i].num);
		printf("이름을 입력하세요 : ");
		scanf_s("%s", list[i].name, sizeof(list[i].name));
		printf("학점을 입력하세요 : ");
		scanf_s("%.1f", &list[i].gpa);
	}


	// 데이터 출력
	for (i = 0; i < CNT; i++)
	{
		printf("학번 : %d | 이름 : %s | 학점 : %1f ", list[i].num, list[i].name, list[i].gpa);
	}


	// 이렇게 구조체의 배열을 활용하면
	// 한 명의 학생이 가지고 있는 정보를 체계적으로 관리, 저장하는 것이 가능해진다

	return 0;
}
