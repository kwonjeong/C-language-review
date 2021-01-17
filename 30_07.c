#include <stdio.h>
// 30-7 심사문제 : 두 수 사이의 숫자 중 7로 끝나지 않는 숫자 출력하기

int main() {
    int num1, num2, i;

    scanf("%d %d", &num1, &num2);

    i = num1;

    while (1)
    {
        if (i % 10 == 7){
            i++;
            continue;
        }

        if (i > num2)
            break;

        printf("%d ", i);
        i++;
    }
    return 0;
}
