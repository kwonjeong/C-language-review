#include <stdio.h>
#include <stdlib.h>
// 58-11 심사문제 : 포인터 변환하기

int main() {
    unsigned long long *numPtr1 = malloc(sizeof(unsigned long long));
    unsigned int *numPtr2;

    scanf("%llx", numPtr1);

    numPtr2 = (int *)numPtr1;

    printf("0x%x\n", *numPtr2);

    free(numPtr1);

    return 0;
}
