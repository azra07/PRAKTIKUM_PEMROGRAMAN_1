#include <stdio.h>

int main(){
    int a,b,c;
    float hasil;
    a = 4;
    b = 8;
    c = 3;
    hasil =(float) a*b/c;

    printf("Variabel x bernilai %d\n",a);
    printf("Variabel y bernilai %d\n",b);
    printf("Variabel z bernilai %d\n",c);
    printf("Jumlah variabel tersebut adalah %.6f", hasil);
    return 0;
}