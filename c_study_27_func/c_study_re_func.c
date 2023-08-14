#include <stdio.h>
#include <string.h>


// 특정한 문자열을 재귀함수로 반복 출력하기


// 재귀함수
// 반복적으로 수행하되, 자기가 자기 자신을 포함하는 형태
// 자기 함수 안에 자기가 또 들어가있는 형태 !
void print(int cnt)
{
	if (cnt == 0)
	{			// 처음에 cnt가 10이 들어왔다면, 0이 될 때까지 반복적으로 함수가 수행됨
		return;
	}
	else
	{
		printf("문자열을 출력합니다 \n");
		print(cnt - 1);  // print 함수 안에서 print 함수 또 사용
	}
}


int main()
{
	int b = 8;
	print(b);   // 10번 출력 됨.

}