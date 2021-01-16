#include <stdio.h>
// 28-11 심사문제 : 교통카드 잔액 출력하기

int main() {
    int money;

    scanf("%d", &money);

    while (money >= 0)
    {
        printf("%d\n", money);
        money -= 1200;
    }
    return 0;
}
