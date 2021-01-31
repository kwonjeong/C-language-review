#include <stdio.h>
// 59-8 연습문제 : 구조체 포인터와 포인터 연산

struct Point2D {
    int x;
    int y;
};

int main() {
    struct Point2D p[3] = {{10, 20}, {30, 40}, {50, 60}};
    struct Point2D *ptr;

    ptr = p;

    printf("%d %d\n", (ptr + 1)->x, (ptr + 2)->y);

    return 0;
}
