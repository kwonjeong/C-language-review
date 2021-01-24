#include <stdio.h>
#include <string.h>
// 45-6 연습문제 : 문자열 자르기

int main() {
    char s1[40] = "Alice's Adventures in Wonderland";

    char *tok = strtok(s1, " ");

    while (tok != NULL)
    {
        printf("%s\n", tok);
        tok = strtok(NULL, " ");
    }

    return 0;
}
