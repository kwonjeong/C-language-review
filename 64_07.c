#include <stdio.h>
// 64-7 심사문제 : 전치행렬 만들기

int transpose(int arr[4][4], int count){
    int temp = 0;
    for (int i = 0, a = 0; i < count; i++, a++){
        for (int j = 0, b = 0; j < count; j++, b++){
            if (i < j){
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}

int main() {
    int matrix[4][4];

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3],
          &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3],
          &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3],
          &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]);

    int n = sizeof(matrix[0]) / sizeof(int);

    transpose(matrix, n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
