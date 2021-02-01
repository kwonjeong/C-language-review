#include <stdio.h>

int getQuotientAndRemainder(int a, int b, int *r){
    int num1 = a / b;
    int num2 = a % b;
    *r = num2;
    return num1;
}

int main() {
    int num1, num2, quotient, remainder;

    scanf("%d %d", &num1, &num2);
    quotient = getQuotientAndRemainder(num1, num2, &remainder);
    printf("%d %d\n", quotient, remainder);

    return 0;
}
