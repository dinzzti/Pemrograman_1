#include <stdio.h>
int main() {
    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan) ;//kenapa input di terminalnya ditengah

    printf("\nOutput\n");
  if(bilangan > 0) { //bilangan positif
    printf("positif\n"); 
  }
  else if(bilangan < 0) { // bilangan negatif
    printf("negatif\n");
  }
  else { // nol (bukan positif atau negatif)
    printf("nol\n");
  }

  return 0;
}