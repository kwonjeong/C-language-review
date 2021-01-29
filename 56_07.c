#include <stdio.h>
// 56-7 심사문제 : 구조체와 공용체로 플래그 비트 필드 만들기

struct Flags{
    union {
        struct {
            unsigned int a : 3;
            unsigned int b : 4;
            unsigned int c : 7;
            unsigned int d : 2;
        };
        unsigned short e;
    };
};

int main() {
    struct Flags f1 = { 0. };

    f1.a = 4; // 100
    f1.b = 8; // 1000
    f1.c = 64; // 1000 000
    f1.d = 3; // 11

    printf("%u\n", f1.e);

    return 0;
}
