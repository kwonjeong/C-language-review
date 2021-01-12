#include <stdio.h>
//18-9 심사문제 : else 사용하기

int main() {
    char num1;

    scanf("%c", &num1);

    if (num1 == 'a')
        printf("a입니다.");
    else
        printf("a가 아닙니다.");

    return 0;
}
