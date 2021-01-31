#include <stdio.h>
#include <stdlib.h>
// 61-13 심사문제 : 2차원 정보 만들기

struct Point2D{
    int x;
    int y;
};

struct Point2D *allocPoint2D(){
    struct Point2D *p = malloc(sizeof(struct Point2D));

    p->x = 90;
    p->y = 75;

    return p;
}

int main() {
    struct Point2D *pos1;

    pos1 = allocPoint2D();

    printf("%d %d\n", pos1->x, pos1->y);

    free(pos1);

    return 0;
}
