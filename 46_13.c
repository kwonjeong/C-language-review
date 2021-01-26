#include <stdio.h>
#include <stdlib.h>
// 46-13 심사문제 : 정수와 실수를 문자열로 변환하기

int main() {
    char s1[10];
    char s2[20];
    int num1;
    float num2;

    scanf("%d %f", &num1, &num2);

    sprintf(s1, "%d", num1);
    sprintf(s2, "%f", num2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
