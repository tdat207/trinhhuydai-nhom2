#include <stdio.h>

int sumN(int n) {
    return n * (n + 1) / 2;
}

long long factorial(int n) {
    long long kq = 1;
    for (int i = 1; i <= n; i++)
        kq *= i;
    return kq;
}

int main() {
    int n = -1;
    int chon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap vao so n\n");
        printf("2. Tinh tong n so tu nhien dau tien\n");
        printf("3. Tinh n!\n");
        printf("4. Thoat\n");
        printf("==========================\n");
        printf("Moi ban chon: ");
        scanf("%d", &chon);

        if (chon == 1) {
            printf("Nhap n: ");
            scanf("%d", &n);
        }
        else if (chon == 2) {
            if (n < 0) {
                printf("Chua nhap n -> Nhap n: ");
                scanf("%d", &n);
            }
            printf("Tong 1..%d = %d\n", n, sumN(n));
        }
        else if (chon == 3) {
            if (n < 0) {
                printf("Chua nhap n -> Nhap n: ");
                scanf("%d", &n);
            }
            printf("%d! = %lld\n", n, factorial(n));
        }
        else if (chon != 4) {
            printf("Lua chon khong hop le!\n");
        }

    } while (chon != 4);

    return 0;
}

