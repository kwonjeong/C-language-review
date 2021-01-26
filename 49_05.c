#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 49-5 연습문제 : 학생 구조체 포인터에 메모리 할당하기

struct Student{
    char name[20];
    int grade;
    int class;
    float average;
};

int main() {
    struct Student *s1 = malloc(sizeof(struct Student));

    strcpy(s1->name, "권정");
    s1->grade = 3;
    s1->class = 8;
    s1->average = 99.8f;

    printf("이름 : %s\n", s1->name);
    printf("나이 : %d\n", s1->grade);
    printf("반 : %d\n", s1->class);
    printf("평균 : %f\n", s1->average);

    free(s1);

    return 0;
}
