#include <stdio.h>
//21-8 연습문제 : 논리 연산자 사용하기

int main() {
    int num1 = 10;
    int num2 = 0;

    if (num1 && num1)
        printf("참\n");
    else
        printf("거짓\n");

    if (num1 || num2)
        printf("참\n");
    else
        printf("거짓\n");

    printf("%s\n", !num1 ? "참" : "거짓");

    return 0;
}
