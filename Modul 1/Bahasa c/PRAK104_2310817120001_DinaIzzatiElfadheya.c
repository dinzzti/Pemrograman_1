#include <stdio.h>

void main() {
    float A = 400000;
    float B = 350000;
    float C = (A*0.13);
    float D = A-C;
    float E = (B*0.21);
    float F = B-E;

    printf("Harga sepatu A adalah %1.f\n", A);
    printf("Harga sepatu B adalah %1.f\n", B);
    printf("Sepatu A mendapatkan diskon 13%%, sehingga harganya menjadi %1.f\n", D);
    printf("Sepatu B mendapatkan diskon 21%%, sehingga harganya menjadi %1.f\n", F);
    

    //kurang simbol persen
    
}