#include <stdio.h>
#include <string.h>
// 42-11 심사문제 : 두 문자열 붙이기

int main() {
    char s1[40];
    char s2[40] = "th";

    scanf("%s", &s1);
    strcat(s1, s2); // s1 뒤에 s2를 붙임

    printf("%s\n", s1);

    return 0;
}
