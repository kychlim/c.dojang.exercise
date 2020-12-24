#include <stdio.h>

int main()
{
    printf("%d\n", 10);                 // 10: ���� ���ͷ�
    printf("%f\n", 0.1f);               // 0.100000: �Ǽ� ���ͷ�
    printf("%c\n", 'a');                // a: ���� ���ͷ�
    printf("%s\n", "Hello, world!");    // Hello, world!: ���ڿ� ���ͷ�

    printf("%d\n", 19);        // 19: 10�� ���� ���ͷ�
    printf("0%o\n", 017);      // 017: 8�� ���� ���ͷ�   (octal number)
    printf("0x%X\n", 0x1F);    // 0x1F: 16�� ���� ���ͷ�

    printf("%f\n", 0.1f);       // 0.100000: �Ǽ� ���ͷ� �Ҽ��� ǥ��
    printf("%f\n", 0.1F);       // 0.100000: �Ǽ� ���ͷ� �Ҽ��� ǥ��
    printf("%f\n", 1.0e-5f);    // 0.000010: �Ǽ� ���ͷ� ���� ǥ���
    printf("%f\n", 1.0E-5F);    // 0.000010: �Ǽ� ���ͷ� ���� ǥ���

    return 0;
}