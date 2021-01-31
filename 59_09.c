#include <stdio.h>
// 59-9 심사문제 : 포인터 연산으로 메모리 주소 조작하기

int main() {
    short *numPtrA;
    short *numPtrB;
    short *numPtrC;

    scanf("%p", &numPtrA);

    numPtrB = (numPtrA + 3);
    numPtrC = (numPtrA + 5);

    printf("%X\n", numPtrB);
    printf("%X\n", numPtrC);

    return 0;
}
