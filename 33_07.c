#include <stdio.h>
// 33-7 연습문제 : 2와 7의 배수, 공배수 처리하기

int main() {
    for (int i = 1; i <= 100; i++)
    {
        if (i % 14 == 0)
            printf("FizzBuzz\n");
        else if (i % 2 == 0)
            printf("Fizz\n");
        else if (i % 7 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
