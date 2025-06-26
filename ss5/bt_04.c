//
// Created by PC on 26/06/2025.
//
#include <stdio.h>

int tong (int fNumber,int sNumber) {
    if (fNumber == sNumber) {
        return sNumber;
    }
    return fNumber+tong(fNumber+1,sNumber);
}
int main () {
    int sNumber, fNumber;
    printf("nhap so thu nhat: ");
    scanf("%d", &fNumber);
    printf("nhat so thu hai: ");
    scanf("%d", &sNumber);
    if (fNumber > sNumber || fNumber < 0 || sNumber < 0) {
        printf("ko hop le");
        return 0;
    }
    tong(fNumber,sNumber);
    printf("%d",tong(fNumber,sNumber));
}