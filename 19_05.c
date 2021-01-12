#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 19-5 심사문제 : 교통카드 시스템 만들기

int main() {
    int balance = 10000;
    int age;

    scanf("%d", &age);

    if (age >= 19)
        balance = balance - 1200;
    else if (13 <= age && age <= 18)
        balance = balance - 720;
    else if (7 <= age && age <= 12)
        balance = balance - 450;

    printf("%d\n", balance);

    return 0;
}
