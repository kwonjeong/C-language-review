#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 52-7 심사문제 : 인적 정보 복제하기

struct Person{
    char name[20];
    int age;
    char address[100];
};

int main() {
    struct Person *p1 = malloc(sizeof(struct Person));
    struct Person p2;

    strcpy(p1->name, "권정");
    p1->age = 21;
    strcpy(p1->address, "경기도 의정부시");

    memcpy(&p2, p1, sizeof(struct Person));

    printf("이름 : %s\n", p2.name);
    printf("나이 : %d\n", p2.age);
    printf("주소 : %s\n", p2.address);

    free(p1);

    return 0;
}
