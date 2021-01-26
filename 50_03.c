#include <stdio.h>
#include <math.h>
// 50-3 심사문제 : 두 점 사이의 거리 구하기

struct Point2D{
    int x;
    int y;
};

int main() {
    struct Point2D p1;
    struct Point2D p2;
    double distance;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    int a = abs(p1.x - p2.x);
    int b = abs(p1.y - p2.y);
    distance = sqrt(pow(a, 2) + pow(b, 2));

    printf("%f\n", distance);

    return 0;
}
