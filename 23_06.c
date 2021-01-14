#include <stdio.h>
//23-6 연습문제 : 비트 논리 연산자 사용하기

int main() {
    unsigned char num1 = 1; // 0001
    unsigned char num2 = 5; // 0101

    printf("%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);

    num1 = ~num2;
    printf("%u\n", num1);

    return 0;
}
