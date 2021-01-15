#include <stdio.h>
// 26-8 심사문제 : 음료수 자판기 만들기

int main() {
    char menu;

    scanf("%c", &menu);

    switch (menu)
    {
        case 'f':
            printf("환타\n");
            break;
        case 'c':
            printf("콜라\n");
            break;
        case 'p':
            printf("포카리스웨트\n");
            break;
        default:
            printf("판매하지 않는 메뉴\n");
            break;
    }
    return 0;
}
