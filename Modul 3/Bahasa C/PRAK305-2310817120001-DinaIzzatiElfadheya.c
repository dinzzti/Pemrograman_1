#include <stdio.h>
int main() {

    int total_detik, hari, jam, menit, detik;
    printf("Input\n");
    scanf("%d", &total_detik);

  hari = total_detik/ (24*3600);
  jam = total_detik % (24*3600)/3600;
  total_detik = total_detik % 3600; 
  menit = total_detik / 60;
  detik = total_detik % 60;

    printf("\nOutput\n");
  if (hari > 0){
    printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
  } else {
    printf("%02d:%02d:%02d", jam, menit, detik);
  }
  return 0;
}