#include <stdio.h>
#include <string.h>
// 45-8 심사문제 : 특정 단어 개수 세기

int main() {
    char s1[1000];
    int n = 0;
    scanf("%[^\n]s", s1);

    char *ptr = strtok(s1, "., "); // the 뒤에 . , 공백으로 끝나므로 나눠줌


    while (ptr != NULL)
    {
        if (strcmp(ptr, "the") == 0){ // the 맞으면 n증가
            n += 1;
        }
        ptr = strtok(NULL, "., ");

    }

    printf("%d\n", n);
    return 0;
}
