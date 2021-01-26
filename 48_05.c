#include <stdio.h>
// 48-5 연습문제 : 좌표 구조체 정의하기

struct point2D {
    int x;
    int y;
};

int main() {
    struct point2D p1;

    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}
