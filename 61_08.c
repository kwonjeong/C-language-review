#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 61-8 연습문제 : 메모리 할당 함수 만들기

void *alllocMemory(){
    void *ptr = malloc(sizeof(char) * 20);
    return ptr;
}

int main() {
    char *s1;

    s1 = alllocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);

    return 0;
}
