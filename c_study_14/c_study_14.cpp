
#include <stdio.h>
#include <string.h>

#define LEN_CHAR   14

int main()
{
   
    /* strlen : 문자열 글자수 세기 */
    char input[5] = "LOVE";
   // printf("문자열의 길이 : %d\n", strlen(input));


    /* strcmp : 문자열 비교하기 */
    char inputOne[5] = "85";
    char inputTwo[5] = "89";
    printf("문자열의 비교 : %d\n", strcmp(inputOne, inputTwo));
    // 두 문자열이 사전적으로 동일하면 0,
    // 왼쪽이 사전적으로 앞에 있다면 -1,
    // 오른쪽이 사전적으로 앞에 있다면 1 반환


    /* strcpy : 문자열 복사 */
    char str[11] = "I love you";
    char rst[13] = "argc";
    strcpy_s(rst, str);
    printf("문자열 복사 : %s\n", rst);
    // strcpy는 내부적으로 포인터를 다루는 함수


    char str2[LEN_CHAR] = "hello world!";
    char rst2[LEN_CHAR] = "한호열짱";
    strncpy_s(rst2, str2, LEN_CHAR);
    printf("문자열 복사 : %s\n", rst2);

    char str3[LEN_CHAR + 1] = "kimhanbizzangg";
    char rst3[LEN_CHAR + 1];
    strncpy_s(rst3, str3, LEN_CHAR + 1);
    printf("문자열 복사_테스트 : %s", rst3);

    return 0;
}
