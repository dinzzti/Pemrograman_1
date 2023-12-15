#include <stdio.h>
int main() {

    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan);
    printf("\nOutput\n");
  if(bilangan < 100 && bilangan >=20) { 
    printf("Puluhan\n");
  }
  else if(bilangan <20 && bilangan >= 10) { 
    printf("Belasan\n");
  }
  else if(bilangan >0 && bilangan <= 9) { 
    printf("Satuan\n"); 
  }
  else if(bilangan == 0) { 
    printf("Nol\n");
  }
  else {
    printf("Anda Menginput Melebihi Limit Bilangan\n");
  }  
  return 0;
}
