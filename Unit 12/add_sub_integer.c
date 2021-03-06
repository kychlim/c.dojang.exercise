#include <stdio.h>

int main()
{
    // 정수 연산
    int num1;
    int num2;

    num1 = 1 + 2;    // 1에 2를 더해서 num1에 저장
    num2 = 1 - 2;    // 1에서 2를 빼서 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    // 실수 연산
    float num3;
    float num4;

    num3 = 1.0f + 0.456789f;    // 1.0에 0.456789를 더해서 num1에 저장
    num4 = 1.0f - 0.456789f;    // 1.0에서 0.456789를 빼서 num2에 저장

    printf("%f\n", num3);    // 1.456789
    printf("%f\n", num4);    // 0.543211

    return 0;
}