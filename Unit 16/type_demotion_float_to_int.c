#include <stdio.h>

int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;

    int num3 = num1 / num2;    // �Ǽ����� �Ǽ��� ������ 2.2�� �������� 
                               // ���� �ڷ������� 2�� ����ǰ� 0.2�� ������

    printf("%d\n", num3);    // 2


    char num4 = 28;
    int num5 = 1000000002;

    char num6 = num4 + num5;    // char���� ū ���ڴ� ������ �� ����
                                // 28 + 2�� ���� �� �ڸ����� ������

    printf("%d\n", num6);    // 30


    return 0;
}