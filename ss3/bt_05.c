//
// Created by PC on 21/06/2025.
//
#include "./coment.h"
int main() {
    int rows, cols;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns : ");
    scanf("%d", &cols);
    if (rows != cols || rows > 1000 || cols > 1000) {
        printf("Number of rows is not equal to number of columns.\n");
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
    printf("*********************************\n");
    int tong = 0;
    int min = (rows < cols) ? rows : cols;
    for(int i = 0; i < min; i++) {
        tong += matrix[i][i];
    }
    int tong2 = 0;
    int max = (rows < cols) ? rows : cols;
    for(int i = 0; i < max; i++) {
        tong2 += matrix[i][cols - 1 - i];
    }
    printf("Dung cheo chinh = %d\n", tong);
    printf("Duong cheo phu = %d\n", tong2);

    return 0;
}