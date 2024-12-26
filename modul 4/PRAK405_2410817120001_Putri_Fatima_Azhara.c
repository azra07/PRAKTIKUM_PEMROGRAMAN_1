#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x; i++) {
        int hasil = 0;
        for (int z = i; z > 0; z--) {
            if (z > 1) {
                printf("(%d * %d) + ", z, y);
            } else {
                printf("(%d * %d)", z, y);
            }
            hasil += z * y;
        }
        printf(" = %d\n", hasil);
    }

    int A = 1, B = 1, C = 0;
    while (A <= x) {
        C += B * y;
        B += A + 1;
        A++;
    }
    printf("%d\n", C);

    return 0;
}