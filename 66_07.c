#include <stdio.h>
#include <stdarg.h>
// 66-7 심사문제 : 가변 인자의 정수 합 구하기

int getSum(char *types, ...){
    va_list ap;
    int i = 0;
    int result = 0;

    va_start(ap, types);
    while (types[i] != '\0')
    {
        switch (types[i])
        {
            case 'i':
                result += va_arg(ap, int);
                break;
            case 'd':
                va_arg(ap, double); // 주소를 옮겨 줘야함
                break;
            case 's':
                va_arg(ap, char *); // 주소를 옮겨 줘야함
                break;
            default:
                break;
        }
        i++;
    }

    va_end(ap);
    return result;
}

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", getSum("isi", num1, "C", 10));
    printf("%d\n", getSum("sdsi", "hello, world!", 5.3, "A", num2));
    printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
    printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));

    return 0;
}
