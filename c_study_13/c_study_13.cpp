﻿
#include <stdio.h>


int main()
{

	char input[1001];
	gets_s(input);
	int count = 0;
	// HELLO   -> H가 index 0, \0(null)값은 index 5에 들어가게 됨. 
	// 문자열이 끝난 다음에는 \0(null)값이 들어감

	while(input[count] != '\0')   // null을 만날 때 까지 count를 증가시키겠다.
	{
		count++;    // count가 5가 됐을 때, while문을 빠져나옴
	}
	printf("입력한 문자열의 길이는 %d입니다\n", count);
	printf("입력한 문자열은 %s입니당", input);
	
	return 0;

}

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
