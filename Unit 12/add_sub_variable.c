#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;    // num1�� 2�� ���� �� �ٽ� num1�� ����
    num2 = num2 - 2;    // num2���� 2�� �� �� �ٽ� num2�� ����

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1


    int num3 = 1;
    int num4 = 1;

    num3 += 2;    // num1�� 2�� ���� �� �ٽ� num1�� ����(2�� ������Ŵ)
    num4 -= 2;    // num2���� 2�� �� �� �ٽ� num2�� ����(2�� ���ҽ�Ŵ)

    printf("%d\n", num3);    //  3
    printf("%d\n", num4);    // -1
    return 0;
}