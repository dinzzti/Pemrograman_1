#include <stdio.h>
int main() {
    int jumlahZetsu;

    printf("Input\n");
    scanf("%d", &jumlahZetsu);

    int zetsuPutih[jumlahZetsu];

    for (int x = 0; x < jumlahZetsu; x++) {
        scanf("%d", &zetsuPutih[x]);
    }
    for (int x = 0; x < jumlahZetsu; x++) {
        zetsuPutih[x] *= (x + 1);
    }
    printf("\nOutput\n");
    
    for (int x = 0; x < jumlahZetsu; x++) {
        printf("%d", zetsuPutih[x]);
        printf(" ");
    }
    return 0;
}
