#include <stdio.h>
#include <math.h>
// 36-12 연습문제 : 2진수를 10진수로 변환하기

int main() {
    int decimal = 0;
    int binary[4] = {1, 1, 0, 1};
    int sq = 0;

    for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
    {
        decimal = decimal + binary[i] * pow(2, sq);
        sq++;
    }

    printf("%d\n", decimal);
    return 0;
}
