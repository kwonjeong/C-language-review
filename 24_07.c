#include <stdio.h>
#define __USE_MINGW_ANSI_STDIO 1
#define _CRT_SECURE_NO_WARNINGS
// 24-7 심사문제 : 시프트 연산과 플래그 활용하기

int main() {
    unsigned char flag = 16;
    unsigned char num1, num2;

    scanf("%hhu %hhu", &num1, &num2);

    num1 = num1 << 3;
    num2 = num2 >> 2;

    flag |= num1;
    flag &= ~num2;
    flag ^= 128;

    printf("%u\n", flag);

    return 0;
}
