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
    int x;
    printf("phan tu muon tim: ");
    scanf("%d", &x);
    for (int i = n-1; i > 0; i--) {
        if (arr[i] == x) {
            printf("phan tu muon tim o vi tri arr[%d] ", i);
            return 0;
        }
    }
    printf("ko ton tai phan tu muon tim\n");
    return 0;
}