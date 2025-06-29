#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max, int index) {
    if (index == n - 1) {
        *min = arr[index];
        *max = arr[index];
        return;
    }
    findMinMax(arr, n, min, max, index + 1);
    if (arr[index] < *min) {
        *min = arr[index];
    }
    if (arr[index] > *max) {
        *max = arr[index];
    }
}

int main() {
    int n ;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int min, max;
    int arr[n] ;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findMinMax(arr, n, &min, &max, 0);
    printf("So nho nhat: %d, So lon nhat: %d\n", min, max);

    return 0;
}