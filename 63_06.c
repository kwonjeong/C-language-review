#include <stdio.h>
// 63-6 연습문제 : 함수에서 반환값으로 값 한 개, 매개변수로 값 두 개 꺼내기

int getNumber(int *a, int *b){
    *a = 10;
    *b = 20;
    return 30;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    result = getNumber(&num1, &num2);

    printf("%d %d %d\n", num1, num2, result);

    return 0;
}
