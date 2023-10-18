#include<stdio.h>
int main(){
    float a, b;
    printf("Input\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    
    float c = a+b;
    printf("\nOutput");
    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, c);
    return 0;

}