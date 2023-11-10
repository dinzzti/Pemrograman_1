#include <stdio.h>
int main() {
  
  int pilihan;
  float nilai_pertama, nilai_kedua, hasil;
  
  while(1) {

    printf("\nPilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

    printf("Masukkan Pilihan : ");
    scanf("%d", &pilihan);

    if(pilihan == 5) {
      printf("Terimakasih, telah menggunakan kalkulator DINA_IZZATI_ELFADHEYA\n");
      break;
    }

    if(pilihan < 1 || pilihan > 5) {
      printf("Input anda salah, silakan coba lagi\n");
      continue;
    }

    printf("Masukkan nilai pertama : ");
    scanf("%f", &nilai_pertama);

    printf("Masukkan nilai kedua : ");  
    scanf("%f", &nilai_kedua);

    if(pilihan == 1) {
      hasil = nilai_pertama + nilai_kedua;
    } else if(pilihan == 2) {
      hasil = nilai_pertama - nilai_kedua;
    } else if(pilihan == 3) {
      hasil = nilai_pertama * nilai_kedua; 
    } else {
      hasil = nilai_pertama / nilai_kedua;
    }

    printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
  }
}
