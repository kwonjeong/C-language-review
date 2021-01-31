#include <stdio.h>
// 58-10 심사문제 : 소수점 이하 버리기

int main() {
    float num1;
    int num2;

    scanf("%f", &num1);

    num2 = (int)num1;
    printf("%d\n", num2);

    return 0;
}
