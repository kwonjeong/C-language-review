#include <stdio.h>
// 55-10 심사문제 : 장치 옵션 구조체 만들기

struct DeviceOption{
    union {
        int option;
        struct {
            unsigned char boot;
            unsigned char interrupt;
        };
    };
};

int main() {
    struct DeviceOption opt;

    opt.boot = 0x22;
    opt.interrupt = 0x11;

    printf("0x%x\n", opt.option);

    return 0;
}
