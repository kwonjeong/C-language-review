#include <stdio.h>
#include <string.h>
// 44-7 심사문제 : 공백 개수 세기

int main() {
    int num = 0;
    char s[1000];

    scanf("%[^\n]s", s);
    char *ptr = strchr(s, ' ');

    while (ptr != NULL)
    {
        num += 1;
        ptr = strchr(ptr + 1, ' ');
    }

    printf("%d\n", num);
    return 0;
}
