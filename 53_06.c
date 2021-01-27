#include <stdio.h>
#include <math.h>
// 53-6 심사문제 : 선의 길이 구하기

struct Point2D{
    int x;
    int y;
};

int main() {
    struct Point2D p[4];
    double length = 0.0f;

    scanf("%d %d %d %d %d %d %d %d",
          &p[0].x, &p[0].y, &p[1].x, &p[1].y,&p[2].x, &p[2].y, &p[3].x, &p[3].y);

    for (int i = 0; i < 3; i++){
        int a = p[i].x - p[i + 1].x;
        int b = p[i].y - p[i + 1].y;
        length = length + sqrt(pow(a, 2) + pow(b, 2));
    }

    printf("%f\n", length);

    return 0;
}
