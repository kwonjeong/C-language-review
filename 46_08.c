#include <stdio.h>
#include <stdlib.h>
// 46-8 연습문제 : 문자열을 16진 정수로 변환하기

int main() {
    char *s1 = "0x1facefee";
    int num1;

    num1 = strtol(s1, NULL, 16);

    printf("0x%X", num1);

    return 0;
}
