#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 = 4.4f;

    printf("%f\n", num1 + num2);    // 15.400000: ������ �Ǽ� ����. ������ �Ǽ��� ��ȯ��
    printf("%f\n", num1 - num2);    // 6.600000: ������ �Ǽ� ����. ������ �Ǽ��� ��ȯ��
    printf("%f\n", num1 * num2);    // 48.400002: ������ �Ǽ� ����. ������ �Ǽ��� ��ȯ��
    printf("%f\n", num1 / num2);    // 2.500000: ������ �Ǽ� ������. ������ �Ǽ��� ��ȯ��

    return 0;
}