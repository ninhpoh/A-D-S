#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("Chuyen dia 1 tu %c sang %c\n", source, target);
        return;
    }
    towerOfHanoi(n - 1, source, target, auxiliary);
    printf("Chuyen dia %d tu %c sang %c\n", n, source, target);
    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int input;
    printf("Nhap so dia (2 hoac 3): ");
    scanf("%d", &input);

    if (input == 2 || input == 3) {
        towerOfHanoi(input, 'A', 'B', 'C');
    } else {
        printf("Input khong hop le\n");
    }

    return 0;
}