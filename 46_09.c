#include <stdio.h>
#include <stdlib.h>
// 46-9 연습문제 : 문자열을 실수로 변환하기

int main() {
    char *s1 = "97.527824";
    float num1;

    num1 = atof(s1);

    printf("%f\n", num1);

    return 0;
}
