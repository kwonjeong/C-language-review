#include <stdio.h>
// 23-9 심사문제 : 시프트 연산자 사용하기

int main() {
    unsigned long long n1;

    scanf("%d", &n1);

    printf("%llu", n1 << 20 >> 4);

    return 0;
}
