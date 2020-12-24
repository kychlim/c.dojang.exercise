#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;    // num1에 2를 더한 뒤 다시 num1에 저장
    num2 = num2 - 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1


    int num3 = 1;
    int num4 = 1;

    num3 += 2;    // num1에 2를 더한 뒤 다시 num1에 저장(2를 증가시킴)
    num4 -= 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 감소시킴)

    printf("%d\n", num3);    //  3
    printf("%d\n", num4);    // -1
    return 0;
}