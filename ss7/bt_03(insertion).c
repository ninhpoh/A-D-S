//
// Created by PC on 30/06/2025.
//
#include <stdio.h>

void insertion(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertion(n, arr);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}