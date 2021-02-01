#include <stdio.h>
// 6206 연습문제 : 뺄셈 함수 만들기

float sub(float a, float b){
    return a - b;
}

int main() {
    float num1;
    num1 = sub(1.0f, 0.1f);

    printf("%f\n", num1);

    return 0;
}
