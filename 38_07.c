#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    scanf("%d", &num);

    int **matrix = malloc(sizeof(int *) * num);
    for (int row = 0; row < num; row++){
        matrix[row] = malloc(sizeof(int) * num);
    }


    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            if (i == j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
