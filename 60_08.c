#include <stdio.h>
// 60-8 심사문제 : 함수 선언하기

void printName();
void printOrdinal();

int main() {
    printName();
    printOrdinal();

    return 0;
}

void printName(){
    printf("Beethoven\n");
}

void printOrdinal(){
    printf("9th Symphony\n");
}
