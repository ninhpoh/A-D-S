//
// Created by PC on 20/06/2025.
//
#include "./coment.h"
int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
//độ phức tạp không gian : O(n)