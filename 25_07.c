#include <stdio.h>
// 25-7 심사문제 : 괄호 사용하기

int main() {
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", (num1 + num2) * 10 - num3);

    return 0;
}
