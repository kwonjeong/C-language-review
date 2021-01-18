#include <stdio.h>
// 33-8 심사문제 : 5와 11의 배수, 공배수 처리하기

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 55 == 0)
            printf("FizzBuzz\n");
        else if (i % 5 == 0)
            printf("Fizz\n");
        else if (i % 11 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
