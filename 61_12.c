#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 61-12 심사문제 : 메모리 할당 함수 만들기

void *allocMemory(){
    void *ptr = malloc(100);

    return ptr;
}

int main() {
    char *name;
    float *stats;

    name = allocMemory();
    strcpy(name, "Mercury");
    printf("%s\n", name);
    free(name);

    stats = allocMemory();
    stats[0] = 87.969f;
    stats[1] = 115.8776f;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats);

    return 0;
}
