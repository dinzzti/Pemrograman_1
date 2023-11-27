#include <stdio.h> 

int reverse(int bilangan) {
    int reverse_bilangan = 0;
    
    while (bilangan > 0) {
        int digit = bilangan % 10;
        reverse_bilangan = reverse_bilangan * 10 + digit;
        bilangan /= 10;
    }
    return reverse_bilangan;
}
int main() {
    int A, B;
    printf("Input\n");
    scanf("%d %d", &A, &B);
    printf("\nOutput\n");
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C)); 
}
