#define _CRT_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 38-8 심사문제 : 지뢰찾기

int main(){
    int row, col;
    int i, j;
    int count = 0;

    scanf("%d %d", &row, &col);
    printf("\n");

    char **matrix = malloc(sizeof(char *) * row);
    for (i = 0; i < row; i++){
        matrix[i] = malloc(sizeof(char) * (col + 1));
        memset(matrix[i], 0, sizeof(char) * (col + 1)); // memset함수 이용해 0으로 초기화
    }

    for (i = 0; i < row; i++){ // 문자열 입력받기
        scanf("%s", matrix[i]);
    }

    for (int i = 0; i < row; i++){ // 요소 검색 후 *이면 넘어가기
        for (int j = 0; j < col; j++){
            if (matrix[i][j] == '*'){
                printf("%c", matrix[i][j]);
                continue;
            }
            else { // *이 아닐 때
                for (int n = i - 1; n <= i + 1; n++){ // 왼쪽 위, 위, 오른쪽 위 / 왼쪽 아래, 아래, 오른쪽 아래
                    for (int m = j - 1; m <= j + 1; m++){ // 왼쪽, 오른쪽
                        if (n < 0 || m < 0 || n >= row || m >= col) // 0보다 작거나 행, 열보다 크면 넘어가기
                            continue;
                        else if (matrix[n][m] == '*') // 검색했을 때 * 주위에 있는 것이 확인되면
                            count += 1; // count 증가
                    }
                }
                matrix[i][j] = count; // 해당 위치에 표시
                printf("%d", matrix[i][j]);
                count = 0; // count 초기화
            }
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++){
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}