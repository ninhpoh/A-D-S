#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap so luong phan tu mang: ");
    scanf("%d", &n);

    int *array = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array);
    return 0;
}
