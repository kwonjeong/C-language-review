#include <stdio.h>
#include <string.h>
// 44-6 연습문제 : 문자열의 오른쪽 끝부터 문자로 검색하기

int main() {
    char s1[30] = "The Little Prince";

    char *ptr = strrchr(s1, 'i');

    printf("%s\n", ptr);

    return 0;
}
