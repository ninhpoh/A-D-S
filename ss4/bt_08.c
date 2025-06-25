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

    int x;
    printf("phan tu can tim: ");
    scanf("%d", &x);
    printf("cac vi tri phan tu xuat hien: \n")
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("* %d *\n",i);
        }
    }
    return 0;
}