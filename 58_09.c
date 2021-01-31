#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 58-9 연습문제 : 구조체 포인터 변환하기

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person *p1 = malloc(sizeof(struct Person));
    void *ptr;

    strcpy(p1->name, "권정");
    p1->age = 21;

    ptr = p1;

    printf("%s %d\n", ((struct Person *)ptr)->name, ((struct Person *)ptr)->age);

    free(p1);

    return 0;
}
