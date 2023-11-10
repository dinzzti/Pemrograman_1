#include <stdio.h>
int main() {
    int angka1, angka2;
    
    printf("Input\n");
    scanf("%d %d", &angka1, &angka2);
    printf("\nOutput\n");

    if (angka1 < angka2) {
        for (int i = angka1; i <= angka2; i++) {
            printf("%d %d", i, angka1 + angka2 - i);
            if (i < angka2){
                printf(" - ");
            }
        }
    } else if (angka1 > angka2) {
        for (int i = angka1; i >= angka2; i--) {
            printf("%d %d", i, angka1 + angka2 - i);
            if (i > angka2){
                printf(" - ");
            }
        }
    } else {
        printf("%d %d", angka1, angka2);
    }
    return 0;
}

