//
// Created by PC on 30/06/2025.
//
#include <stdio.h>
#include <string.h>

void insertion(char str[]) {
    for (int i = 1; i < strlen(str); i++) {
        char k = str[i];
        int j = i - 1;
        while (j >= 0 && str[j] > k) {
            str[j + 1] = str[j];
            j--;
        }
        str[j + 1] = k;
    }
}

int main() {
    char str[50];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    if (strlen(str) == 0) {
        printf("Chuoi khong hop le\n");
        return 1;
    }
    printf("Chuoi truoc khi sap xep: %s\n", str);
    insertion(str);
    printf("Chuoi sau khi sap xep: %s\n", str);
    return 0;
}