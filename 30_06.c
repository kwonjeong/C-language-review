#include <stdio.h>
// 30-6 연습문제 : 3으로 끝나는 숫자만 출력하기

int main() {
    int i = 1;

    for (;;)
    {
        if (i % 10 != 3){
            i++;
            continue;
        }

        if (i > 103)
            break;

        printf("%d ", i);
        i++;
    }
    return 0;
}
