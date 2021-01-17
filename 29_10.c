#include <stdio.h>
// 심사문제 : 숫자의 합 구하기

int main() {
    unsigned int num1;
    unsigned int sum = 0;

    scanf("%d", &num1);

    unsigned int i = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= num1);

    printf("%d\n", sum);

    return 0;
}
