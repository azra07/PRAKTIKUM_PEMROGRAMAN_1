#include <stdio.h>

int main(){
    int n1,n2,baris1[50], baris2[50], hasil, i;
    scanf("%d %d", &n1,&n2);
    if (n1==n2){
        for (i=0; i<n1; i++){
            scanf("%d", &baris1[i]);
        }
        for (i=0; i<n2; i++){
            scanf("%d", &baris2[i]);
        }
        for (i=0; i<n1; i++){
            hasil = baris1[i]*baris2[i];
            printf("%d ", hasil);
        }
    }
    else {
        printf("Jumlah tidak sama");
    }
}