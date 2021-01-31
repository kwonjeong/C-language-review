#include <stdio.h>
// 59-7 연습문제 : 포인터 연산과 역참조 사용하기

int main() {
    int numArr[5] = { 11, 22, 33, 44, 55 };
    int *numPtrA;
    int *ptr;

    numPtrA = &numArr[2];
    ptr = numArr;

    printf("%d\n", *(numPtrA + 2));
    printf("%d\n", *(ptr + 1));

    return 0;
}
