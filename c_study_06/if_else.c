#include <stdio.h>


int main(void)
{

	/* 조건문 (if-else) */
	int x = -15;

	if (x < 0)
	{
		x = -x;
	}
	printf("x의 절대값은 %d입니다.\n", x);


	printf("\n\n");

	int score = 75;  // 학생의 점수

	if (score >= 90)
	{
		printf("너의 학점은 A야.\n");
	}
	else if (score >= 80) {
		printf("너의 학점은 B야.\n");
	}
	else if (score >= 70) {
		printf("너의 학점은 C야.\n");
	}
	else
	{
		printf("너 재시험이야...\n");
	}

	printf("\n\n");



	/*
		if 조건문 사용해서 윤년 판독 프로그램 만들기

		윤년 => 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록
		윤년 => 400년 단위일 때는 어떤 상황이든간에 윤년으로 설정
	*/


	int year = 2018;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니당.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니당.\n", year);
	}


	return 0;

}



