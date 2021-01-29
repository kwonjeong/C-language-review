#include <stdio.h>
// 56-6 심사문제 : 구조체로 플래그 비트 필드 만들기

struct Flags {
    unsigned int a : 4;
    unsigned int b : 7;
    unsigned int c : 3;
};

int main() {
    struct Flags f1;

    f1.a = 0xffffffff;
    f1.b = 0xffffffff;
    f1.c = 0xffffffff;

    printf("%u %u %u\n", f1.a, f1.b, f1.c);

    return 0;
}
