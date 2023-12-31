﻿
#include <stdio.h>

// ** pointer **
// 두 변수의 값을 서로 변환하는 포인터 함수
// 가장 대표적인 포인터를 이용한 함수 swap
// 포인터를 이용하면 특정 함수가 사용될 때, 단순히 함수가 끝나면서 변수들도 끝나는게 아니라
// 이 함수를 불러온 main 함수에서도 영향을 미칠 수 있게 됨.
// 포인터를 이용하면 프로그램 전역에서 언제 어디서든 어떠한 변수가 가지는 값들을 바꾸는 등의 다양한 기법들 사용 가능
void swap(int *x, int *y)
{
    int temp;
    temp = *x;   // 포인터 x가 가리키는 위치에 값을 넣어준다.
                 // -> 포인터가 가리키고 있는 특정한 주소에 있는 변수의 값을 가져와서 temp에 넣기
    *x = *y;     // x가 가리키는 주소의 값을 y가 가리키는 주소의 값으로 바꿔준다
    *y = temp;   // y가 가리키는 주소값을 temp에 넣기 
}

int main()
{
    
    int x = 1;
    int y = 2;
    swap(&x, &y);  // x와 y의 주소를 함수의 매개변수로 넣어주기
    printf("x = %d\ny = %d\n", x, y);
    // -> x와 y의 값이 변경됨
    // 두 변수의 값을 변환할 때는 포인터를 이용해서 함수를 만들어야 함.
    // 왜?? 포인터를 이용하지 않게 되면 매개변수로 넘어온 값들은 함수(swap) 내에서만 처리되기 때문에
    // 정상적으로 두 변수의 값이 변환되지 않는다

    // -> *과 &을 지우고 포인터 이용하지 않은 채로 실행을 해보면 x와 y값이 변환되지 않음
    // 왜?? 함수로 들어간 x, y값은 매개변수로서 들어와서 해당 함수 내(swap)에서만 사용되기 때문에
    // swap함수가 종료 되면 메인 함수(main)에는 영향을 전혀 끼치지 못하기 때문.

    int num = 10;
    printf("%p", &num);   // %p = 메모리 주소값. 고정X

    return 0;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
