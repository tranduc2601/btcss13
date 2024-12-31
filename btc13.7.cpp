#include <stdio.h>
#include <stdlib.h>
int** taoMaTran(int soHang, int soCot) {
    int** maTran = (int**)malloc(soHang * sizeof(int*));
    for (int i = 0; i < soHang; i++) {
        maTran[i] = (int*)malloc(soCot * sizeof(int));
    }
    printf(" nhap gia tri cho ma tran (%d hang, %d cot):\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf(" nhap gia tri tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
    return maTran;
}
int inMaTran(int** maTran, int soHang, int soCot) {
    int tong = 0;
    printf(" ma tran vua nhap:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
            tong += maTran[i][j];
        }
        printf("\n");
    }
    return tong; 
}
int giaiPhongBoNho(int** maTran, int soHang) {
    for (int i = 0; i < soHang; i++) {
        free(maTran[i]);
    }
    free(maTran);
    return 1; 
}
int main() {
    int hang, cot;
    printf(" nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    printf(" nhap so cot cua ma tran: ");
    scanf("%d", &cot);
    int** maTran = taoMaTran(hang, cot);
    int tong = inMaTran(maTran, hang, cot);
    printf(" tong cac phan tu trong ma tran: %d\n", tong);
    if (giaiPhongBoNho(maTran, hang)) {
        printf(" da giai phong bo nho thanh cong.\n");
    }
    return 0;
}

