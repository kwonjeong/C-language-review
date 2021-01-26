#include <stdio.h>
// 48-6 연습문제 : typedef로 좌표 구조체 정의하기
typedef struct _point2D{
    int x;
    int y;
} point2D;

int main() {
    point2D p1;

    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}
