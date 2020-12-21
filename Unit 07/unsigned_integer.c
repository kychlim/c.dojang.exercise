#include <stdio.h>
// 부호없는 정수 자료형
int main()
{
    unsigned char num1 = 200;                          // 1바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned short num2 = 60000;                       // 2바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned int num3 = 4123456789;                    // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long num4 = 4123456789;                   // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long long num5 = 12345678901234567890;    // 8바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    // unsigned char, unsigned short, unsigned int는 %u로 출력하고 
    // unsigned long은 %lu, unsigned long long은 %llu로 출력
    
    // printf 함수에서 unsigned char, unsigned short는 서식 지정자 %d로도 충분히 출력할 수 있지만 
    // unsigned int는 %u, unsigned long은 %lu, unsigned long long은 %llu로 출력해야 함!!
    
    printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);
    // 200 60000 4123456789 4123456789 12345678901234567890

    return 0;
}
