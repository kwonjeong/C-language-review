#include <stdio.h>
// 23-8 심사문제 : 비트 논리 연산자 사용하기

int main() {
    unsigned int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 & num2);
    printf("%u\n", ~num1);

    return 0;
}
