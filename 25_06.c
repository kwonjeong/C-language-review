#include <stdio.h>
// 25-6 연습문제 : 괄호 사용하기

int main() {
    int num1 = 1;
    int num2 = 1;
    int num3;

    num3 = 2 * ((1 << num1) + (2 >> num2));

    printf("%d\n", num3);

    return 0;
}
