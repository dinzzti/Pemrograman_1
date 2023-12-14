#include <stdio.h>

int main() {
    int A = 9;
    int B = 5;
    int C = 8;
    int D = 8;
    int E = A%B;
    int F = C%D; 
    int G = E+F;

    printf (" Variabel a bernilai %d\n", A);
    printf (" Variabel b bernilai %d\n", B);
    printf (" Variabel x bernilai %d\n", C);
    printf (" Variabel a bernilai %d\n", D);
    printf ("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", G);
    return0;
}
