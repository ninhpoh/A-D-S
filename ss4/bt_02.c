//
// Created by PC on 25/06/2025.
//
#include "./coment.h"
int main() {
    int max = -10000000000;
    int n;
    int *arr = (int*)malloc(sizeof(int) * n);
    printf("so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf(" -%d-", arr[i]);
    }
    printf("\n");
    int f;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            f = i;
        }
    }
    printf("%d  \n", arr[f-1]);
    return 0;
}