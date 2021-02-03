#include <stdio.h>
// 65-7 심사문제 : 좌표를 이동시키는 함수 만들기

struct Point2D{
    int x;
    int y;
};

movePoint2D(struct Point2D *p1, int a, int b){
    p1->x = p1->x + a;
    p1->y = p1->y + b;
}

int main() {
    struct Point2D p1;
    int offsetX, offsetY;

    scanf("%d %d %d %d", &p1.x, &p1.y, &offsetX, &offsetY);

    movePoint2D(&p1, offsetX, offsetY);

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}
