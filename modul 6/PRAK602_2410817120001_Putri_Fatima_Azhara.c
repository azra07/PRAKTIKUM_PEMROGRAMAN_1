#include <stdio.h>

int main(){
    int ruang, isi[20], i, hasil;
    scanf("%d", &ruang);

    for (i=0; i<ruang; i++){
        scanf("%d",&isi[i]);
    }
    for (i=0; i<ruang; i++){
        hasil = isi[i]*(i+1);
        printf("%d ", hasil);
    }

    return 0;
}