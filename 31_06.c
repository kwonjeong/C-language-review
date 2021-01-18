#include <stdio.h>
// 31-6 연습문제 : 역삼각형 모양으로 별 출력하기

int main() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
