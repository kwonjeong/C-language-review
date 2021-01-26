#include <stdio.h>
#include <stdlib.h>
// 49-6 연습문제 : 3차원 좌표 구조체 포인터에 메모리 할당하기

typedef struct _Point3D{
    float x;
    float y;
    float z;
} Point3D;

int main() {
    Point3D *p1 = malloc(sizeof(Point3D));

    p1->x = 10;
    p1->y = 20;
    p1->z = 30;

    printf("%f %f %f\n", p1->x, p1->y, p1->z);

    free(p1);

    return 0;
}
