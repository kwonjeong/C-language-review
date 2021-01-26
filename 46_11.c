#include <stdio.h>
#include <stdlib.h>
// 46-11 연습문제 : 숫자를 문자열로 변환하기

int main() {
    char s1[30];
    float num1 = 98.415237f;
    int num2 = 0x3fce1920;

    sprintf(s1, "%f 0x%x", num1, num2);

    printf("%s\n", s1);

    return 0;
}
