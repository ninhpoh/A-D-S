#include <stdio.h>
#include <string.h>
#include <ctype.h>

int chuyenDoiSangSoNguyenRec(const char *chuoi, int viTri, int doDai) {

    if (viTri >= doDai) {
        return 0;
    }

    if (!isdigit(chuoi[viTri])) {
        return -1;
    }
    int giaTriHienTai = chuyenDoiSangSoNguyenRec(chuoi, viTri + 1, doDai);
    if (giaTriHienTai == -1) {
        return -1;
    }

    return (chuoi[viTri] - '0') * (int)(10, doDai - viTri - 1) + giaTriHienTai;
}

int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;

    int doDai = strlen(chuoi);
    int ketQua = chuyenDoiSangSoNguyenRec(chuoi, 0, doDai);
    if (ketQua == -1) {
        printf("Input khong hop le\n");
    } else {
        printf("Output: %d\n", ketQua);
    }

    return 0;
}