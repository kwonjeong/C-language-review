#include <stdio.h>
// 43-6 심사문제 : 서수 줄임말 무자열 만들기

int main() {
    int number;
    char name[31], result[40];

    scanf("%d %s", &number, name);

    if (number == 1)
        sprintf(result, "%dst %s\n", number, name);
    else if (number == 2)
        sprintf(result, "%dnd %s\n", number, name);
    else if (number == 3)
        sprintf(result, "%drd %s\n", number, name);
    else
        sprintf(result, "%dth %s\n", number, name);

    printf("%s\n", result);
    return 0;
}
