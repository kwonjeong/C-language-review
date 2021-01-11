#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);

    if (age < 18){
        printf("청소년 관람 불가\n");
    }

    if (age > 18){
        printf("관람 가능\n");
    }

    return 0;
}
