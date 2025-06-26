//
// Created by PC on 26/06/2025.
//
#include <stdio.h>
int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
    printf("giai thua cua %d is %d", n, factorial(n));
    return 0;
}