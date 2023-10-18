#include<stdio.h>
#include<math.h>
int main (){
    float a, b, c, d, e;
    printf("Input\n");
    scanf("%f", &a); 
    printf("");
    scanf("%f", &b); 

    c = (float)22/7*(pow(a,2))*b; //volume
    d = (float)2*22/7*a*(a+b); //luas
    e = (float)2*22/7*a; //keliling

    printf("\nOutput\n");
    printf("Volume = %.2f\n", c);
    printf("Luas = %.2f\n", d);
    printf("Keliling = %.2f\n", e);

    return 0;
}