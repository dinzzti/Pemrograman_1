#include <stdio.h>
int main() {
    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan) ;

    printf("\nOutput\n");
  if(bilangan > 0) { 
    printf("positif\n"); 
  }
  else if(bilangan < 0) { 
    printf("negatif\n");
  }
  else {
    printf("nol\n");
  }

  return 0;
}
