//
// Created by PC on 26/06/2025.
//
#include "./coment.h"
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("nhap so bat ki: ");
    scanf("%d", &n);
    int *array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = fibonacci(i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

}