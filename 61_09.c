#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 61-9 연습문제 : 인적 정보 함수 만들기

struct Person{
    char name[20];
    int age;
};

struct Person *allocPerson(){
    struct Person *p = malloc(sizeof(struct Person));

    strcpy(p->name, "Kayle");
    p->age = 22;

    return p;
}

int main() {
    struct Person *p1;

    p1 = allocPerson();

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);

    free(p1);

    return 0;
}
