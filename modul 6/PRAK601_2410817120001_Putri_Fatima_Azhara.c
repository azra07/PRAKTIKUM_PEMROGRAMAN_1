#include <stdio.h>

int main(){
    int baris, kolom, i, j, isi[20][20];
    scanf("%d %d", &baris, &kolom);

    for (i=0; i<baris; i++) {
        for (j=0; j<kolom; j++ ){
            scanf("%d", &isi[i][j]);
        }
    }

    for (i=0; i<baris; i++){
        for (j=0; j<kolom; j++){
            printf("%d ", isi[i][j]);
        }
        printf("\n");
    }
    return 0;
}