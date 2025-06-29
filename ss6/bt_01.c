//
// Created by PC on 27/06/2025.
//
#include <stdio.h>

int decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    decimalToBinary(n/2);
    printf("%d", n%2);

}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("Dang nhi phan: ");
    decimalToBinary(n);
    printf("\n");
    return 0;
}