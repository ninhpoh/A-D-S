//
// Created by PC on 21/06/2025.
//
#include "./coment.h"
int main() {
    int n,m;
    printf("so luong phan tu: ");
    scanf("%d", &n);
    if (n<0 || n >1000) {
        printf("Erreur\n");
        return 0;
    }
    int *arr = (int*)malloc(sizeof(int) * n);
    int *arr2 = (int*)malloc(sizeof(int) * m);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("-[%d]-", i, arr[i]);
    }
    printf("\n");
    printf("so luong phan tu muon them:");
    scanf("%d", &m);

    arr = (int *)realloc(arr, sizeof(int) * (n + m));

    for (int i = 0; i < m; i++) {
        printf("arr[%d] = ", n + i);
        scanf("%d", &arr[n + i]);
    }

    printf("Mang sau khi them:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}