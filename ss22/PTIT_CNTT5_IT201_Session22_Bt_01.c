#include "./coment.h"
int MATRIX[100][100];

void matrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            MATRIX[i][j] = 0;
        }
    }
}

void add(int u,int v) {
    MATRIX[u][v] = MATRIX[v][u] = 1;
}

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", MATRIX[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap kich thuoc ma tran:");
    scanf("%d", &n);
    matrix(n);
    add(0,1);
    add(0,2);
    add(1,2);
    add(3,2);
    add(1,3);
    add(3,4);
    print(n);
    return 0;
}