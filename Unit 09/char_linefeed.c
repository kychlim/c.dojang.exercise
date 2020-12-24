#include <stdio.h>

int main()
{
    char c1 = 'a';           // 문자 a 할당
    char c2 = 'b';           // 문자 b 할당 
    char c3 = 'c';           // 문자 c 할당 
    char lineFeed = '\n';    // 제어 문자 \n 할당
    char carriage_return = '\r';     // 제어 문자 \r 할당
    char horizontal_tab = '\t';      // 제어 문자 \t 할당

    printf("%c%c%c%c%c%c%c", c1, lineFeed, c2, horizontal_tab, c2, carriage_return, c3);    // 제어 문자도 %c로 출력할 수 있음

    return 0;
}