#include <stdio.h>

int main() {
    float A = 5;
    float B = 14;
    float C = B/A;
    float D = C/(2*3.14);
    
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %1.f Putaran \n", A);
    printf("Jarak tempuh Pak Dengklek = %2.f Kilometer \n\n", B);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", D);

    return 0;

}