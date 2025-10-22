
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong lon hon 0");
    } else {
        printf("Day so tu 1 den %d la:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}
