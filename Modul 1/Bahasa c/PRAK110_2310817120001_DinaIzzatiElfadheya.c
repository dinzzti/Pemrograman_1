#include <stdio.h>
#include <math.h>

int main() {
    int X = 12;
    int Y = 5;
    int Z = pow (X,2)+ pow (Y,2);
    int R = sqrt(Z);
    int S = X+Y+R;
    int T = (X*Y)/2;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", Y);
    printf("Tinggi = %d cm \n\n", X);
    printf("Jawab : \n"); 
    printf("Sisi A = %d cm\n", X);
    printf("Sisi B = %d cm\n", R);
    printf("Sisi C = %d cm\n", Y);
    printf("Keliling = %d cm\n", S);
    printf("Luas = %d cm\n", T);
    return 0;

}
