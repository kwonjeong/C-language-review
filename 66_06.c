#include <stdio.h>
#include <stdarg.h>
// 66-6 심사문제 : 가변 인자의 합 구하기

int sum(int arg, ...){
    va_list ap;
    int result = 0;

    va_start(ap, arg);
    for (int i = 0; i < arg; i++){
        result += va_arg(ap, int);
    }
    return result;
}

int main() {
    int num1, num2;
    int num3, num4, num5;

    scanf("%d %d", &num1, &num2);
    scanf("%d %d %d", &num3, &num4, &num5);

    printf("%d\n", sum(2, num1, num2));
    printf("%d\n", sum(3, num3, num4, num5));

    return 0;
}
