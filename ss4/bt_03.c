//
// Created by PC on 25/06/2025.
//
#include "./coment.h"
int main() {
    int n;
    printf("so luong phan tu: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf(" -%d-", arr[i]);
    }
    printf("\n");
    int min=100000000;
    int f;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            f = i;
        }
    }
    printf("%d  \n", f);
    return 0;
}