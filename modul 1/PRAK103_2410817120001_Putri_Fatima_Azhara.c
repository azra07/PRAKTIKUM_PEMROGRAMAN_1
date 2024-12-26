#include <stdio.h>

int main() {
    int a,b,x,y;
    float hasil;
    a = 9;
    b = 6;
    x = 10; 
    y = 7;
    hasil = (float) (a+b)*x/y;

    printf("Variabel a bernilai %d\n",a);
    printf("Variabel b bernilai %d\n",b);
    printf("Variabel x bernilai %d\n",x);
    printf("Variabel y bernilai %d\n",y);
    printf("Jumlah variabel tersebut adalah %.2f", hasil);
    return 0;
}