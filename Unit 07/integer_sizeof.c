#include <stdio.h>

int main()
{
    int num1 = 0;
    int size;

    size = sizeof num1;    // ���� num1�� �ڷ��� ũ�⸦ ����

    printf("num1�� ũ��: %d\n", size);

    size = sizeof(int);

    printf("num1�� ũ��: %d\n", size);

    size = sizeof(num1);

    printf("num1�� ũ��: %d\n", size);

    return 0;
}