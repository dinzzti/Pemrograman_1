#include <stdio.h>
int main() {
    int bilangan;
    
    printf("Input\n");
    scanf("%d", &bilangan );
    
    printf("\nOutput\n");
    
    for (int i = 1; i <= bilangan; i += 2) { // bilangan ganjil
        printf("%d ", i);
    }
    printf("\n");//bilangan genap
    for (int i = (bilangan % 2 == 0 ? bilangan : bilangan - 1); i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

