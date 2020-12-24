#include <stdio.h>

int main()
{
    printf("%ld\n", -10L);                       // long ũ���� ���� ���ͷ�
    printf("%lld\n", -1234567890123456789LL);    // long long ũ���� ���� ���ͷ�

    printf("%u\n", 10U);                         // unsigned int ũ���� ���� ���ͷ�
    printf("%lu\n", 1234567890UL);               // unsigned long ũ���� ���� ���ͷ�

    printf("%lu\n", 10UL);                       // unsigned long ũ���� ���� ���ͷ�
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long ũ���� ���� ���ͷ�


    printf("0%lo\n", 017L);             // long ũ���� 8�� ���� ���ͷ�
    printf("0%lo\n", 017UL);            // unsigned long ũ���� 8�� ���� ���ͷ�
    printf("0x%lX\n", 0x7FFFFFL);       // long ũ���� 16�� ���� ���ͷ�
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long ũ���� 16�� ���� ���ͷ�

    return 0;
}