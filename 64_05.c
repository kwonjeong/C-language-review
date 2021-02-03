#include <stdio.h>
// 64-5 연습문제 : 단위행렬 만들기

void setIdentityMatrix(float arr[4][4], int count){
    for (int i = 0; i < count; i++){
        arr[i][i] = 1.0f;
    }
}

int main() {
    float matrix[4][4] = { 0.0f, };

    int n = sizeof(matrix[0]) / sizeof(float);

    setIdentityMatrix(matrix, n);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
