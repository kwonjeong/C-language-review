#include <stdio.h>
#include <stdlib.h>
// 62-9 심사문제 : 3차원 정보 만들기

struct Point3D{
    float x;
    float y;
    float z;
};

void *allocPoint3D(float x, float y, float z){
    struct Point3D *ptr = malloc(sizeof(struct Point3D));
    ptr->x = x;
    ptr->y = y;
    ptr->z = z;

    return ptr;
}

int main() {
    float x, y, z;
    struct Point3D *pos1;

    scanf("%f %f %f", &x, &y, &z);

    pos1 = allocPoint3D(x, y, z);

    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);

    free(pos1);
    return 0;
}
