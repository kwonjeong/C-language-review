#include <stdio.h>
// 32-6 심사문제 : 중첩 루프 빠져나오기

int main() {
    int num = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num == 10)
                goto EXIT2;

            num++;
        }
    }

    EXIT1:
        printf("100\n");
    EXIT2:
        printf("200\n");
    EXIT3:
        printf("300\n");

    return 0;
}
