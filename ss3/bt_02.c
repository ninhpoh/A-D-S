//
// Created by PC on 21/06/2025.
//
#include "./coment.h"
int main() {
    int max = -100000000;
    int n;
    printf("nhap so luong phan tu mang: ");
    scanf("%d", &n);

    int *array = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("nhap phan tu vi tri array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Max : %d\n", max);
    return 0;
}