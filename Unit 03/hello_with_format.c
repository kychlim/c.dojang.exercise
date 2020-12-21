#include <stdio.h>

int main()
{
	printf("%s\n", "Hello world!!!"); // 서식 지정자 사용

	printf("%s %s\n", "Hello", "1234");

	printf("%s, %s\n", "Hello", "1234"); /// 서식 지정자에 콤마

	printf("%s %s\n", "Hello,", "1234"); // 문자열에 콤마

	printf("%s%s\n", "Hello", "1234"); // %s 붙여쓰기

	printf("%s%s\n", "Hello ", "1234");  // 공백- hello 뒤
	 
	printf("%s%s\n", "Hello", " 1234");  // 공백- 1234 앞
	return 0;

}