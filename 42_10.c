#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 42-10 심사문제 : 문자 배열 복사하기

int main() {
    char s1[31];
    char s2[31];

    scanf("%s", &s1);
    strcpy(s2, s1);

    printf("%s\n%s\n", s1, s2);

    return 0;
}
