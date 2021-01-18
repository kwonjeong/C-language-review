#include <stdio.h>
// 31-7 심사문제 : 산 모양으로 별 출력하기

int main() {
    int n, m;

    scanf("%d", &n);
    m = n * 2; // 가로 최대 개수

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (j >= n - i && j <= n + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
