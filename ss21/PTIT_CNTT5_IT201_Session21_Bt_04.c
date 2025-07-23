#include "./coment.h"
int MATRIX[3][3];

void matrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            MATRIX[i][j] = 0;
        }
    }
}

void add(int u,int v) {
    MATRIX[u][v] = 1;
}

void print() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}

int main() {
    add(1,0);
    add(1,2);
    add(2,0);
    print();
    return 0;
}