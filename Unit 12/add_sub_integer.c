#include <stdio.h>

int main()
{
    // ���� ����
    int num1;
    int num2;

    num1 = 1 + 2;    // 1�� 2�� ���ؼ� num1�� ����
    num2 = 1 - 2;    // 1���� 2�� ���� num2�� ����

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    // �Ǽ� ����
    float num3;
    float num4;

    num3 = 1.0f + 0.456789f;    // 1.0�� 0.456789�� ���ؼ� num1�� ����
    num4 = 1.0f - 0.456789f;    // 1.0���� 0.456789�� ���� num2�� ����

    printf("%f\n", num3);    // 1.456789
    printf("%f\n", num4);    // 0.543211

    return 0;
}