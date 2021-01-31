#include <stdio.h>
// 60-6 연습문제 : 함수 정의하기

void printHostname();
void printIDAddress();

int main() {
    printHostname();
    printIDAddress();

    return 0;
}

void printHostname(){
    printf("Saturn\n");
}

void printIDAddress(){
    printf("192.168.10.6\n");
}
