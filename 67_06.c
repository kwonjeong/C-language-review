#include <stdio.h>
// 67-6 심사문제 : 재귀호출로 피보나치 수 구하기

int fib(int n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int num1;
    scanf("%d", &num1);

    printf("%d\n", fib(num1));

    return 0;
}
