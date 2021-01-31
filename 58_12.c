#include <stdio.h>
#include <stdlib.h>
// 58-12 심사문제 : void 포인터 변환하기

int main() {
    long double *numPtr1 = malloc(sizeof(long double));
    void *ptr;

    scanf("%Lf", numPtr1);
    ptr = numPtr1;

    printf("%Lf\n", *(long long *)ptr);
    free(numPtr1);

    return 0;
}
