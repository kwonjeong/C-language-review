#include <stdio.h>
#include <stdlib.h>
// 40-6 연습문제 : 입력받은 문자열을 동적 메모리에 저장하기

int main() {
    char *s1 = malloc(sizeof(char) * 100);

    printf("문자열을 입력하세요 : ");
    scanf("%s", s1);

    printf("%s\n", s1);

    free(s1);

    return 0;
}
