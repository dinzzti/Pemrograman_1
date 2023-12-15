#include<stdio.h>
#include<math.h>
int main (){
    float a, b, c, d, e;
    printf("Input\n");
    scanf("%f", &a); 
    printf("");
    scanf("%f", &b); 

    c = (float)22/7*(pow(a,2))*b; 
    d = (float)2*22/7*a*(a+b); 
    e = (float)2*22/7*a; 

    printf("\nOutput\n");
    printf("Volume = %.2f\n", c);
    printf("Luas = %.2f\n", d);
    printf("Keliling = %.2f\n", e);
    return 0;
}
