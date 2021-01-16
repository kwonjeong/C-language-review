#include <stdio.h>
// 심사문제 : 알파벳 순서로 출력하기

int main() {
    char c1;

    scanf("%c", &c1);

    for (; c1 <= 122; c1++)
        printf("%c", c1);

    return 0;
}
