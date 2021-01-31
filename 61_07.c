#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 6107 연습문제 : 문자열 포인터 반환하기

char *getName(){
    char *str = malloc(sizeof(char) * 20);
    strcpy(str, "Mars");
    return str;
}

int main() {
    char *name;
    name = getName();

    printf("%s\n", name);
    free(name);

    return 0;
}
