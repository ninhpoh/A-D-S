//
// Created by PC on 21/06/2025.
//
#include "./coment.h"
int main() {
    int n;
    int m = 0;
    int sum = 0;
    printf("nhap so luong phan tu mang: ");
    scanf("%d", &n);

    int *array = (int*) malloc(n * sizeof(int));


    for (int i = 0; i < n; i++) {
        printf("nhap phan tu vi tri array[%d]: ",i);
        scanf("%d", &array[i]);
        if (array[i]%2==0) {
            sum += array[i];
            m++;
        }
    }
    double re = (double)sum / m;
    printf("TBC : %.2f\n", re);
    return 0;
}