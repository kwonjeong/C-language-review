#include <stdio.h>
#include <stdlib.h>
// 40-7 연습문제 : 문자열 세 개 입력받기

int main() {
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    char *s3 = malloc(sizeof(char) * 10);

    printf("문자열을 세 개 입력하세요 :");
    scanf("%s %s %s", s1, s2, s3);

    printf("%s\n%s\n%s", s1, s2, s3);

    free(s1);
    free(s2);
    free(s3);

    return 0;
}
