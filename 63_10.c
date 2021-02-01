#include <stdio.h>
#include <stdlib.h>
// 63-10 심사문제 : 함수에서 메모리를 할당하여 배열 만들기

void allocArray(void **ptr, int s, int size){ 
    *ptr = malloc(size * s);
}

int main() {
    long long *numArr1;
    int *numArr2;

    allocArray((void **)&numArr1, 10, sizeof(long long));
    allocArray((void **)&numArr2, 3, sizeof(int));

    scanf("%lld %d", &numArr1[9], &numArr2[2]);
    printf("%lld %d\n", numArr1[9], numArr2[2]);

    free(numArr2);
    free(numArr1);

    return 0;
}
