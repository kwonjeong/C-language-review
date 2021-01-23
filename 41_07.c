#include <stdio.h>
#include <string.h>
// 41-7 심사문제 : 문자열 비교하기

int main() {
    int s;
    char s1[30], s2[30];

    scanf("%s %s", s1, s2);

    s = strcmp(s1, s2);
    printf("%d\n", s);

    return 0;
}
