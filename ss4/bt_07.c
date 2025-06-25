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
        printf("* %d *", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("* %d-%d *\n", arr[i], arr[n-1-i]);
        }
    }
    return 0;
}
