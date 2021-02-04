#include <stdio.h>
// 67-5 연습문제 : 재귀호출로 1부터 100까지의 합 구하기

int sum(int n){
    if (n == 100)
        return 100;

    return n + sum(n + 1); // n과 지금까지의 합 sum 더하기
}

int main() {
    printf("%d\n", sum(1));

    return 0;
}
