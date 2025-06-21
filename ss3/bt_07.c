//
// Created by PC on 21/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int min = 100000000;
    int max = -100000000;
    int rows, cols;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0 || rows > 1000 || cols > 1000) {
        printf("Invalid input\n");
        return 0;
    }

    int **matrix = (int**) malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*) malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int k;
    int count = 0;
    printf("Enter the number of rows:\n");
    scanf("%d", &k);
    for (int i = 0; i < cols; i++) {
        count += matrix[k-1][i];
    }
    printf("The number of rows is: %d\n", count);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
