#include <stdio.h>

int main() {
    int A = 4;
    int B = 5;
    int C = 7;
    int D = 85000;
    int E = A+B+C;
    int F = E*85000;

    printf("Diketahui \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", A, B, C);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", E);
    printf("Harga tanah Per Meter adalah %d\n", D);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", F);

    return 0;


}    