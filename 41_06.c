#include <stdio.h>
#include <string.h>
// 41-6 심사문제 : 문자열 길이 구하기

int main() {
    char s1[30];
    int s;

    scanf("%s", &s1);

    s = strlen(s1);
    printf("%d\n", s);

    return 0;
}
