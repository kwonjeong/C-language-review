#include <stdio.h>
// 28-10 연습문제 : while 반복문 사용하기

int main() {
    unsigned char i = 1;
    while (i != 0)
    {
        printf("%u\n", i);
        i <<= 1;
    }
    return 0;
}
