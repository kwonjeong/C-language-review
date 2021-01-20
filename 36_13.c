#include <stdio.h>
// 36-13 심사문제 : 가장 작은 수 출력하기

int main() {
    int numArr[5];
    int smallestNumber;

    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);
    smallestNumber = 2147483647;

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {
        if (smallestNumber > numArr[i])
            smallestNumber = numArr[i];
    }

    printf("%d\n", smallestNumber);
    return 0;
}
