//
// Created by PC on 25/06/2025.
//
#include "./coment.h"
int main() {
    int n;
    int *arr = (int*)malloc(sizeof(int) * n);
    printf("so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("phan tu muon tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("phan tu muon tim o vi tri arr[%d] ", (arr[i]-1));
            return 0;
        }
    }
    printf("ko ton tai phan tu muon tim\n");
    return 0;
}