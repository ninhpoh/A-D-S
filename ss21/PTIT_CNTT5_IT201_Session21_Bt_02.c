#include "./coment.h"
int MATRIX[4][4];

void matrix() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            MATRIX[i][j] = 0;
        }
    }
}

void add(int u,int v) {
    MATRIX[u][v] = MATRIX[v][u] = 1;
}

void print() {
    printf("{\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d, ", MATRIX[i][j]);
        }
        printf("\n");
    }
    printf("}\n");
}

int main() {
    matrix();
    add(0,1);
    add(0,2);
    add(1,2);
    add(2,3);
    print();
    return 0;
}