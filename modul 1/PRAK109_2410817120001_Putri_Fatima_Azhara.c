#include <stdio.h>

int main() {
    int pasukan, pahlawan, bagi_rata;
    pasukan = 958730;
    pahlawan = 5;
    bagi_rata = pasukan/pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n",pasukan);
    printf("Jumlah pahlawan = %d\n",pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", bagi_rata);
    return 0;
}