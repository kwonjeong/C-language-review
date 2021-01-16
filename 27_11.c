#include <stdio.h>
// 27-11 연습문제 : for 반복문에서 변수 두 개 사용하기

int main() {
    for (int i = 2, j = 5; i <= 32; i *= 2, j--)
        printf("%d %d\n", i, j);

    return 0;
}
