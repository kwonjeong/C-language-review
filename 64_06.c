#include <stdio.h>
// 64-6 심사문제 : 배열 매개변수 사용하기

void printReverse(int arr[], int count){
    for (int i = 9; i >= 0; i--){
        printf("%d ", arr[i]);
    }
}

int main() {
    int numArr[10];

    scanf("%d %d %d %d %d %d %d %d %d %d",
          &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
          &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9] );

    printReverse(numArr, sizeof(numArr) / sizeof(int));

    return 0;
}
