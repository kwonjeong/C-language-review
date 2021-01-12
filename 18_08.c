#include <stdio.h>
//18-8 연습문제 : 합격 여부 판단하기

int main() {
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("합격\n");
    else
        printf("불합격\n");

    return 0;
}
