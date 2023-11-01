#include <stdio.h>
int main (){
    int a, b;

      printf("Input\n");
    scanf("%d %d", &a, &b);

    printf("\nOutput\n");
  if (a < b){
    printf("%d %d", a, b);
    } else {
      printf("%d %d", b, a);
    }
  return 0;
}