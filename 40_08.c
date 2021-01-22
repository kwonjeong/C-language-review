#include <stdio.h>
#include <stdlib.h>
// 40-8 심사문제 : 문자열 네 개 입력받기

int main() {
    char *s1 = malloc(sizeof(char) * 30);
    char *s2 = malloc(sizeof(char) * 30);
    char *s3 = malloc(sizeof(char) * 30);
    char *s4 = malloc(sizeof(char) * 30);

    scanf("%s %s %s %s", s1, s2, s3, s4);

    printf("%s\n%s\n%s\n%s", s1, s2, s3, s4);

    return 0;
}
