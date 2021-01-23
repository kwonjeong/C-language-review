#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 42-9 연습문제 : 문자열 리터럴과 동적 메모리 붙이기

int main() {
    char *s1 = " Wonderland";
    char *s2 = malloc(sizeof(char) * 30);

    strcpy(s2, "Alice in");
    strcat(s2, s1);

    printf("%s\n", s2);

    free(s2);

    return 0;
}
