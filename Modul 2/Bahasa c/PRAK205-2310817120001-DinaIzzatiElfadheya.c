#include<stdio.h>
#include<math.h>
void main(){
    int A, B, C, D, E, F, G; 
    printf("Input\n");
    scanf("%i", &A);
    printf("");
    scanf("%i", &B);

    C= pow(B,2)-pow(A,2);
    D= sqrt(C);
    E= (int)A+B+D;
    F= (int)A*D/2;

    printf("\nOutput\n");
    printf("Alas = %i cm \n", D );
    printf("Tinggi = %i cm\n", A );
    printf("Keliling = %i cm\n", E );
    printf("Luas = %i cm^2\n", F);
}
