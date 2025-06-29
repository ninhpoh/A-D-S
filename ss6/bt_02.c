#include "./coment.h"
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("nhap so bat ki: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        printf("%d ", fibonacci(i));
    }
}