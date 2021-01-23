#include <stdio.h>
#include <string.h>
// 42-8 연습문제 : 문자 배열을 붙이기

int main() {
    char s1[20] = " 9th Symphony";
    char s2[40] = "Beethoven";

    strcat(s2, s1);

    printf("%s\n", s2);

    return 0;
}
