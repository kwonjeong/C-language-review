#include <stdio.h>

// 15_5 심사문제 : 정수의 각 자릿수를 역순으로 출력하기
int main() {
    int num1, n1, n2, n3, n4, n5;

    scanf("%d", &num1);

    n1 = num1 % 10;
    num1 /= 10;
    n2 = num1 % 10;
    num1 /= 10;
    n3 = num1 % 10;
    num1 /= 10;
    n4 = num1 % 10;
    num1 /= 10;
    n5 = num1 % 10;

    printf("%d %d %d %d %d", n1, n2, n3, n4, n5);
    return 0;
}
