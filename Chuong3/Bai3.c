#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong lon hon 0");
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        printf("Tong cac so chan tu 1 den %d la: %d\n", n, sum);
    }
    return 0;
}
