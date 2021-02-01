#include <stdio.h>
// 62-8 심사문제 : 덧셈 함수 만들기

long long add(long long a, long long b){
    return a + b;
}

int main() {
    long long num1, num2;

    scanf("%lld %lld", &num1, &num2);

    printf("%lld\n", add(num1, num2));

    return 0;
}
