#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define _CRT_SECURE_NO_WRNINGS

struct student
{
	int number;
	char name[10];
	int grade;
}
typedef stu
;

struct point
{
	int x;
	int y;
}
;


int main()
{
	stu s;
	
	/* 하드코딩 */
	//s.number = 20230001;
	//strcpy_s(s.name, "김한비");
	//s.grade = 4.5;

	printf("학번을 입력하세요 : \n");
	scanf_s("%d", &s.number);
	printf("이름을 입력하세요 : \n");
	scanf_s("%s", s.name, 10);
	printf("등급을 입력하세요 : \n");
	scanf_s("%d", &s.grade);

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("등급: %d\n", s.grade);


	struct point p[2];
	int xDiff, yDiff;

	double distance;

	printf("1번 점의 좌표를 입력하세요. : ");
	scanf_s("%d %d", &p[0].x, &p[0].y);

	printf("2번 점의 좌표를 입력하세요. : ");
	scanf_s("%d %d", &p[1].x, &p[1].y);

	xDiff = p[0].x - p[0].y;
	yDiff = p[1].x - p[1].y;

	// 두 점 사이의 거리를 구하는 공식
	distance = sqrt(xDiff * xDiff + yDiff * yDiff);
			 // sqrt : 제곱근 구하는 함수

	printf("두 점 사이의 거리는 %f입니다.", distance);


		

	return 0;
}

