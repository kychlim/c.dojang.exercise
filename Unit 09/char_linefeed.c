#include <stdio.h>

int main()
{
    char c1 = 'a';           // ���� a �Ҵ�
    char c2 = 'b';           // ���� b �Ҵ� 
    char c3 = 'c';           // ���� c �Ҵ� 
    char lineFeed = '\n';    // ���� ���� \n �Ҵ�
    char carriage_return = '\r';     // ���� ���� \r �Ҵ�
    char horizontal_tab = '\t';      // ���� ���� \t �Ҵ�

    printf("%c%c%c%c%c%c%c", c1, lineFeed, c2, horizontal_tab, c2, carriage_return, c3);    // ���� ���ڵ� %c�� ����� �� ����

    return 0;
}