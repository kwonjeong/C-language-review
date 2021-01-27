#include <stdio.h>
// 51-6 심사문제 : 암호화 헤더 크기 구하기

struct EncryptionHeader{
    char flags; // 1바이트
    long a; // 4바이트
    char b; // 1바이트
};

int main() {
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}
