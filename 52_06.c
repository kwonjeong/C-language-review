#include <stdio.h>
#include <string.h>
// 52-6 심사문제 : 인적 정보 삭제하기

struct Person{
    char name[20];
    int age;
    char address[100];
};

int main() {
    struct Person p1;

    strcpy(p1.name, "권정");
    p1.age = 21;
    strcpy(p1.address, "경기도 의정부시");

    memset(&p1, NULL, sizeof(struct Person));

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("주소 : %s\n", p1.address);

    return 0;
}
