#include <stdio.h>
// 54-5 연습문제 : 정수 데이터 공용체 정의하기

union Data{
    int num1;
    short num2;
    char num3;
};

int main() {
    union Data d1;

    d1.num1 = 0x12345678;

    printf("0x%x 0x%x\n", d1.num2, d1.num3);

    return 0;
}
