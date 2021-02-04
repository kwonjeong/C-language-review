#include <stdio.h>
// 67-7 심사문제 : 재귀호출로 1부터 n까지 합 구하기

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}
