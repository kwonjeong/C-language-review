#include <stdio.h>
#include <stdbool.h>
//22-8 심사문제 : 불 자료형 사용하기

int main() {
    bool b1 = false;
    bool b2 = true;

    if (b1 != true)
        printf("참\n");
    else
        printf("거짓\n");

    printf("%s\n", b2 == false ? "참" : "거짓");

    return 0;
}
