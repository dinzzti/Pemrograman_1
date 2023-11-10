#include <stdio.h>
int main() {
    int banyak_baris, kelipatan;
    int total = 0;

    printf("Input\n");
    scanf("%d %d", &banyak_baris, &kelipatan);
    printf("\nOutput\n");
    
    for (int i = 1; i <= banyak_baris; i++) {
        int baris_total = 0;
        for (int bilangan = i; bilangan >= 1; bilangan--) {
            int nilai_kelipatan = bilangan * kelipatan;
            printf("(%d * %d)", bilangan, kelipatan);
            if (bilangan > 1) {
                printf(" + ");
            }
            baris_total += nilai_kelipatan;
        }
        total += baris_total;
        printf(" = %d\n", baris_total);
    }
    printf("%d \n", total);
    return 0;
}
