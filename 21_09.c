#include <stdio.h>
//12-9 심사문제 : 논리 연산자 사용하기

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 && n2)
        printf("참\n");
    else
        printf("거짓\n");

    if (n1 || n2)
        printf("참\n");
    else
        printf("거짓\n");

    if(!n1)
        printf("참\n");
    else
        printf("거짓\n");

    return 0;
}
