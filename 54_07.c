#include <stdio.h>
// 54-7 심사문제 : 정수 데이터 공용체 정의하기

union Data{
    int num1; // 4바이트
    char num2; // 1바이트
};

int main() {
    union Data d1;

    d1.num1 = 0x1111;

    printf("0x%x %d\n", d1.num2, sizeof(d1));

    return 0;
}
