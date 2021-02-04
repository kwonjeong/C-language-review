#include <stdio.h>
#include <string.h>
// 68-5 심사문제 : 반환값과 매개변수가 있는 함수 포인터 만들기

int add(int *a, int *b)
{
    return *a + *b;
}

int sub(int *a, int *b)
{
    return *a - *b;
}

int mul(int *a, int *b)
{
    return *a * *b;
}

int div(int *a, int *b)
{
    return *a / *b;
}

int main() {
    char funcName[10];
    int num1, num2;
    scanf("%s %d %d", funcName, &num1, &num2);

    int (*fp)(int *, int *);

    if (strcmp(funcName, "add") == 0) // strcmp : 두 문자열 같으면 0 출력
        fp = add;
    else if(strcmp(funcName, "sub") == 0)
        fp = sub;
    else if(strcmp(funcName, "mul") == 0)
        fp = mul;
    else if(strcmp(funcName, "div") == 0)
        fp = div;
    else
        printf("X");


    printf("%d\n", fp(&num1, &num2));

    return 0;
}
