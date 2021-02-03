#include <stdio.h>
#include <math.h>
// 65-6 심사문제 : 두 점 사이의 거리를 구하는 함수 만들기

struct Point2D{
    int x;
    int y;
};

double getDistance(struct Point2D p1, struct Point2D p2){
    double result;
    int a, b;

    a = abs(p1.x - p2.y);
    b = abs(p1.y - p2.x);

    result = sqrt(pow(a, 2) + pow(b, 2));
    return result;
}

int main() {
    struct Point2D p1;
    struct Point2D p2;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    printf("%f\n", getDistance(p1, p2));

    return 0;
}
