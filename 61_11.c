#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 61-11 심사문제 : 문자열 포인터 반환하기

char *getName(){
    char *ptr = malloc(sizeof(char) * 20);
    strcpy(ptr, "Neptune");
    return ptr;
}

int main() {
    char *name;

    name = getName();
    printf("%s\n", name);
    free(name);

    return 0;
}
