#include <stdio.h>

int maksimal(int a, int b) {
    int x = a;
    if(a < b){
        x = b;
}
    return x;
}
int minimal(int a, int b) {
    int y = a;
    if(a > b){
        y = b;
    }
    return y;   
}
int main() {
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan);
    while (batas < bilangan) {
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
        }
    printf("\nOutput\n");
    printf("%d %d", maks, minim);
}