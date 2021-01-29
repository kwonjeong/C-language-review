#include <stdio.h>
// 57-7 연습문제 : 월 출력하기

typedef enum _Month{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
    MonthCount
} Month;

int main() {
    for (Month i = Jan; i < MonthCount; i++){
        printf("%d ", i);
    }

    return 0;
}
