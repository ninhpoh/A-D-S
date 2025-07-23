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
    matrix();
    int n;
    printf("nhap diem khoi dau:");
    scanf("%d",&n);
    getchar();
    int m;
    printf("nhap diem ket thuc:");
    scanf("%d",&m);
    getchar();
    add(n,m);
    print();
    return 0;
}