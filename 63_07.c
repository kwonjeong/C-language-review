#include <stdio.h>
#include <stdlib.h>
// 63-7 연습문제 : 함수에서 행렬 만들기

void allocMatrix(void ***ptr, int m, int n, int elementSize){
    *ptr = malloc(sizeof(void *) * m);
    for (int i = 0; i < m; i++){
        (*ptr)[i] = malloc(elementSize * n);
    }
}

void freeMatrix(void ***ptr, int m){
    for (int i = 0; i < m; i++){
        free((*ptr)[i]);
    }
    free(*ptr);
}

int main() {
    short **matrix;

    allocMatrix(&matrix, 3, 3, sizeof(short)); // m : 3, n : 3, 요소의 자료형 short

    matrix[0][2] = 10;
    matrix[1][1] = 20;
    printf("%d %d\n", matrix[0][2], matrix[1][1]);

    freeMatrix(&matrix, 3);

    return 0;
}
