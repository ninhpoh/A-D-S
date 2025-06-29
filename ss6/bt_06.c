//
// Created by PC on 29/06/2025.
//
#include <stdio.h>

int countWays(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int input;
    printf("Nhap so bac: ");
    scanf("%d", &input);
    if (input > 0) {
        printf("So cach leo: %d\n", countWays(input));
    } else {
        printf("Input khong hop le\n");
    }
    return 0;
}