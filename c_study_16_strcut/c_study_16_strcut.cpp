#include <stdio.h>
#include <string.h>
#include <math.h>

/* 구조체 활용 (중첩 구조체) */

// 사각형의 넓이, 둘레 구하는 프로그램
struct point
{
	int x;
	int y;

} typedef p;

struct rect   // 사각형
{
	p p1;
	p p2;
} typedef rt;


int main()
{
	rt r;  // r이라는 사각형 하나
	int w, h, area, peri;   // 가로, 세로, 넓이, 둘레

	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 하단의 좌표를 입력하세요 : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);
	 
	w = abs(r.p2.x - r.p1.x);  // x 좌표의 차이
	h = abs(r.p2.y - r.p1.y);  // y 좌표의 차이

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("사각형의 넓이는 %d이고, 둘레는 %d입니다.", area, peri);

	return 0;

}

