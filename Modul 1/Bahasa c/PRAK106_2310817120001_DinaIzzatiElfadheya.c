#include <stdio.h>

int main() {
    int A = 4;
    int B = 8;
    int C = 3;
    int D = 8;
    int E = 8;
    int F = 8;


if (B==C){
    D= 1;
} else{
    D=0;
}
if (B>C){
    E= 1;
} else{
    E=0;
}
if (A!=B){
    F=1;
} else {
    F=0;
}

    printf("Variabel a bernilai %d\n", A);
    printf("Variabel b bernilai %d\n", B);
    printf("Variabel c bernilai %d\n", C);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", D); 
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", E);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", F);

    return 0;




}            