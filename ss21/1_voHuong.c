#include "./coment.h"

// CAC BUOC KHOI TAO DO THI

int MATRIX[3][3];

//ham khoi tao ma tran 2 chieu voi cac o la 0
void matrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            MATRIX[i][j] = 0;
        }
    }
}

//khoi tao lien ket
void adjacency(int u, int v) {
    MATRIX[u][v] = 1;
    MATRIX[v][u] = 1;
    // do thi vo huong thi phai co qua co lai
}

//hien thi ma tran
void print() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}

int main() {
    matrix();
    adjacency(0, 1);
    print();
    return 0;
}