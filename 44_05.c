#include <stdio.h>
#include <string.h>
// 44-5 연습문제 : 문자열 안에서 문자로 검색하기

int main() {
    char s1[30] = "Alice in Wonderland";

    char *ptr = strstr(s1, "n");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strstr(ptr + 1, "n");
    }
    return 0;
}
