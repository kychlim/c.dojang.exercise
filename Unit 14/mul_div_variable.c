#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3;    // num1�� 3�� ���� �� �ٽ� num1�� ����
    num2 = num2 / 2;    // num2���� 2�� ���� �� �ٽ� num2�� ����

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3


    int num3 = 2;
    int num4 = 7;

    num3 *= 3;    // num3�� 3�� ���� �� �ٽ� num1�� ����
    num4 /= 2;    // num4���� 2�� ���� �� �ٽ� num2�� ����

    printf("%d\n", num3);    // 6
    printf("%d\n", num4);    // 3

    return 0;

    return 0;
}