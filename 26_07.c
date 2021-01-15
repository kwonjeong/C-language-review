#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 26-7 연습문제 : switch 분기문 사용하기

int main() {
    int num1 = 0;

    scanf("%d", &num1);

    switch (num1)
    {
        case 1 << 1:
            printf("2\n");
            break;
        case 1 << 2:
            printf("4\n");
            break;
        case 1 << 3:
            printf("8\n");
            break;
        default:
            printf("default\n");
            break;
    }
    return 0;
}
