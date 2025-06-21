
#include <stdio.h>

// CÁCH 1:
// Độ phức tạp: O(n)
int tinhTongBangVongLap(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    return tong;
}

// CÁCH 2
// Tổng = n * (n + 1) / 2
// Độ phức tạp: O(1)
int tinhTongBangCongThuc(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n = 100;
    int tong1 = tinhTongBangVongLap(n);
    int tong2 = tinhTongBangCongThuc(n);

    printf("Tổng từ 1 đến %d (cách 1 - vòng lặp): %d\n", n, tong1);
    printf("Tổng từ 1 đến %d (cách 2 - công thức): %d\n", n, tong2);
    return 0;
}
