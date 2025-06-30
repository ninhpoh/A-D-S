//
// Created by PC on 30/06/2025.
//
#include "./coment.h"

void sort(int **arr,int rows,int cols) {
    int k;
    printf("Nhap cot muon sap xep: ");
    scanf("%d",&k);
    k--;
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - 1 - i; j++) {
            if (arr[j][k] > arr[j + 1][k]) {
                // Swap elements in the column
                int temp = arr[j][k];
                arr[j][k] = arr[j + 1][k];
                arr[j + 1][k] = temp;
            }
        }
    }
}

int main() {
    int rows,cols;

    printf("Nhap so hang: ");
    scanf("%d",&rows);
    printf("Nhap so cot: ");
    scanf("%d",&cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Khong du bo nho!\n");
            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("Nhap arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMang vua nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    sort(arr,rows,cols);

    printf("\nMang sau nhat:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}