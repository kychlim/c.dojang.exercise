#include <stdio.h>

int main()
{
	printf("%s\n", "Hello world!!!"); // ���� ������ ���

	printf("%s %s\n", "Hello", "1234");

	printf("%s, %s\n", "Hello", "1234"); /// ���� �����ڿ� �޸�

	printf("%s %s\n", "Hello,", "1234"); // ���ڿ��� �޸�

	printf("%s%s\n", "Hello", "1234"); // %s �ٿ�����

	printf("%s%s\n", "Hello ", "1234");  // ����- hello ��
	 
	printf("%s%s\n", "Hello", " 1234");  // ����- 1234 ��
	return 0;

}