#include <stdio.h>

int main() {
    while (1) {
        printf("\nPilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        int user;
        float nilai_pertama, nilai_kedua, hasil;

        printf("Masukkan Pilihan: ");
        scanf("%d", &user);

        if (user == 1) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama + nilai_kedua;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (user == 2) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama - nilai_kedua;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (user == 3) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama * nilai_kedua;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (user == 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai_pertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai_kedua);
            hasil = nilai_pertama / nilai_kedua;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (user == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Putri Fatima Az'hara\n");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}