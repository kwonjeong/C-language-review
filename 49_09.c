#include <stdio.h>
// 49-9 심사문제 : 구조체 포인터에 구조체 변수의 주소 할당하기

struct Point3D{
    float x;
    float y;
    float z;
};

int main() {
    struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
    struct Point3D *ptr;

    ptr = &p1;

    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

    return 0;
}
