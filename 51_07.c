#include <stdio.h>
// 51-7 심사문제 : 패킷 크기 조절되기

#pragma pack(push, 1)
struct Packet{
    short a;
    char b;
};
#pragma pack(pop)

int main() {
    struct Packet header;

    printf("%d\n", sizeof(header));

    return 0;
}
