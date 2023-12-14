#include <stdio.h>
void perkalian(int n1, int n2, int kali[n1], int kali2[n2]) { 
    for (int x = 0; x < n1; x++) {
        printf("%d ", kali[x] * kali2[x]);
    }
}
int main() {
    int n1, n2;
    printf("Input\n");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("\nOutput\n");
        printf("Jumlah tidak sama \n");
        return 0;
    }
    int kali[n1];
    for (int x = 0; x < n1; x++) {
        scanf("%d", &kali[x]);
    }
    int kali2[n2];
        for (int y = 0; y < n2; y++) {
            scanf("%d", &kali2[y]);
        }
        printf("\nOutput\n");
        perkalian(n1, n2, kali, kali2);
    return 0;
}