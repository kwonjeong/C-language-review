#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 49-8 심사문제 : 사람과 자동차 구조체 포인터에 메모리 할당하기

struct Person{
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    char number[30];
    int displacement;
} Car;

int main() {
    struct Person *s1 = malloc(sizeof(struct Person));
    Car *s2 = malloc(sizeof(Car));

    strcpy(s1->name, "권영민");
    s1->age = 53;
    strcpy(s1->address, "경기도 의정부시");
    strcpy(s2->name, "스타렉스");
    strcpy(s2->number, "84주 3530");
    s2->displacement = 2497;

    printf("이름 : %s\n", s1->name);
    printf("나이 : %d\n", s1->age);
    printf("주소 : %s\n", s1->address);
    printf("자동차 이름 : %s\n", s2->name);
    printf("자동차 번호 : %s\n", s2->number);
    printf("배기량 : %dcc\n", s2->displacement);

    free(s1);
    free(s2);

    return 0;
}
