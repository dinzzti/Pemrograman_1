#include <stdio.h> 

int MaxBilangan(int bil1, int bil2, int bil3, int bil4) {
    int max = bil1;
    if (bil2 > max) {
        max = bil2;
    }
    if (bil3 > max) {
        max = bil3;
    }
    if (bil4 > max) {
        max = bil4;
    }
    return max;
}
int main() {
    int a, b, c, d;
    printf("Input\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d); 
    printf("\nOutput\n");
    printf("%d", hasil);
    return 0;
}
