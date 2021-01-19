#include <stdio.h>
// 34-10 심사문제 : 포인터와 주소 연산자 사용하기

int main() {
    int *numPtr1;
    int **numPtr2;
    int num1;

    scanf("%d", &num1);

    numPtr1 = &num1;
    numPtr2 = &numPtr1;

    printf("%d\n", **numPtr2);

    return 0;
}
