#include <stdio.h>

int main() {
    int a,b,c,tanah,keliling,harga_tanah;
    a = 4;
    b = 5;
    c = 7;
    tanah = 85000;
    keliling = a+b+c;
    harga_tanah = keliling*tanah;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", tanah);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", harga_tanah);
    return 0;
}