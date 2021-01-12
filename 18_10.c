#include <stdio.h>
// 18-10 심사문제 : 합격 여부 판단하기

int main() {
    int kor, eng, math, sci, average;

    scanf("%d %d %d %d", &kor, &eng, &math, &sci);
    average = (kor + eng + math + sci) / 4;

    if (0 > kor || 100 < kor || 0 > eng || 100 < eng || 0 > math || 100 < math || 0 > sci || 100 < sci)
        printf("잘못된 점수");
    else
    {
        if (average >= 85)
            printf("합격");
        else
            printf("불합격");
    }

    return 0;
}
