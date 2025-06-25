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

    int temp=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("* %d *", arr[i]);
    }
    printf("\n");

    int search;
    printf("so luong phan tu muon tim: ");
    scanf("%d", &search);

    int low,heigh,mid;
    low = 0;
    heigh = n-1;
    int f = -1;
    while (low <= heigh) {
        mid = (low + heigh) / 2;
        if (arr[mid] == search) {
            f=mid;
            break;
        }
        else if (search > arr[mid]) {
            low = mid + 1;
        }
        else {
            heigh = mid - 1;
        }
    }
    if (f != -1) {
        printf("co ton tai\n");
    }else {
        printf("khong ton tai\n");
    }
    return 0;
}