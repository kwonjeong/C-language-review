#include <stdio.h>
#include <stdlib.h>
// 연습문제 : 문자열으르 10진 정수로 변환하기

int main() {
    char *s1 = "20972";
    int num1;

    num1 = atoi(s1);

    printf("%d\n", num1);

    return 0;
}
