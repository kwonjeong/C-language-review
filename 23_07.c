#include <stdio.h>
//23-7 연습문제 : 시프트 연산자 사용하기

int main() {
    unsigned char num1 = 32; // 0010 0000

    num1 = num1 >> 4 << 1;

    printf("%u\n", num1);

    return 0;
}
