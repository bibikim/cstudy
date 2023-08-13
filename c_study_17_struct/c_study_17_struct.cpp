#include <stdio.h>
#include <string.h>

/* 구조체의 비교 */

struct point
{
	int x;
	int y;

} typedef pt;


// main함수에 있는 것보다 따로 함수로 만들어져 나온 것이 훨씬 체계적으로 보임
// 왜?!? >>>  point라는 구조체 하나만 비교하는 함수가 들어가는 것이기 때문
//       >>>  main에서 아래 함수만 사용해주기만 하면 되기 때문에 깔끔하다.
void cmpPoint(pt p1, pt p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1과 p2는 같습니다.");
	}
	else
	{
		printf("p1과 p2는 다릅니다");
	}
};


int main()
{
	pt p1;
	pt p2;

	p1.x = 30;
	p1.y = 10;

	p2.x = 40;
	p2.y = 10;



	/*
	if (p1 == p2)  
	{
		printf("p1과 p2는 같습니다.");
	};

	 // 구조체는 아무리 같은 구조체 타입이더라도 두개의 변수 자체를 직접 비교하는 것은 불가능
     // p1과 p2는 그 자체로 쓰일 수 없기 때문이다!

	*/
	
	
	/*
	if ((p1.x == p2.x) && (p1.y == p2.y))
		// 이렇게 비교해야 올바른 것.
		// 이걸 또 따로 함수(cmpPoint)로 만들어서 따로 빼서 확인도 가능
	{
		printf("p1과 p2는 같습니다.");
	
	}
	*/

	// 함수를 따로 만들어서 빼주면 p1, p2로 비교 가능
	cmpPoint(p1, p2);
	 

	return 0;
}