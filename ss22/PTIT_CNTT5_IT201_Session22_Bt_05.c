#include <stdio.h>

int MATRIX[100][100];

void matrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            MATRIX[i][j] = 0;
        }
    }
}

void add(int u, int v) {
    MATRIX[u][v] = MATRIX[v][u] = 1;
}

void print(int n,int m) {
    for (int i = 0; i < n; i++) {
        int degree = 0;
        for (int j = 0; j < n; j++) {
            if (MATRIX[i][j] == 1) degree++;
        }
        if (i==m) {
            printf("=> So dinh ke voi %d la: %d\n", i, degree);
            break;
        }
    }
}

int main() {
    int n;
    printf("Nhap kich thuoc ma tran: ");
    scanf("%d", &n);
    matrix(n);
    int m;
    printf("Nhap dinh muon kiem tra: ");
    scanf("%d", &m);
    add(0, 1);
    add(0, 2);
    add(1, 2);
    add(1, 3);
    add(2, 3);
    add(3, 4);
    print(n,m);

    return 0;
}