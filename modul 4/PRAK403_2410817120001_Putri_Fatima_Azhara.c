#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y) {
        int z = x - y;
        for (int i = 0; i <= z; i++) {
            printf("%d %d", x - i, y + i);
            if (i < z) {
                printf(" - ");
            }
        }
    } else if (x < y) {
        int z = y - x;
        for (int i = 0; i <= z; i++) {
            printf("%d %d", x + i, y - i);
            if (i < z) {
                printf(" - ");
            }
        }
    } else {
        printf("%d %d", x, y);
    }

    printf("\n");
    return 0;
}