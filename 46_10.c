#include <stdio.h>
#include <stdlib.h>
// 46-10 연습문제 : 여러 개의 실수로 된 문자열을 실수로 변환하기

int main() {
    char *s1 = "29.977213 4528.112305";
    float num1;
    float num2;
    char *end;

    num1 = strtof(s1, &end);
    num2 = strtof(end, NULL);

    printf("%f\n%f\n", num1, num2);

    return 0;
}
