#include <stdio.h>
// 37-9 심사문제 : 전치행렬 구하기

int main() {
    int matrix[5][5];

    scanf("%d %d %d %d %d", &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d", &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d", &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d", &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d", &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

    int matrix2[5][5];
    for (int i = 0; i < sizeof(matrix2) / sizeof(matrix2[0]); i++){
        for (int j = 0; j < sizeof(matrix[0]) / sizeof(int); j++){
            matrix2[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < sizeof(matrix2) / sizeof(matrix2[0]); i++){
        for (int j = 0; j < sizeof(matrix2[0]) / sizeof(int); j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
