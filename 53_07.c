#include <stdio.h>
#include <stdlib.h>
// 53-7 심사문제 : 나이가 많은 사람 찾기

struct Person{
    char name[30];
    int age;
};

int main() {
    struct Person *p[5];
    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
        p[i] = malloc(sizeof(struct Person));
    }

    scanf("%s %d %s %d %s %d %s %d %s %d",
          p[0]->name, &p[0]->age, p[1]->name, &p[1]->age, p[2]->name, &p[2]->age, p[3]->name, &p[3]->age, p[4]->name, &p[4]->age);

    int h = 0;
    int oldest;
    for (int i = 0; i < 4; i++){
        if(p[i]->age > h){
            h = p[i]->age;
            oldest = i;
        }
    }

    printf("%s\n", p[oldest]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++){
        free(p[i]);
    }

    return 0;
}
