#include <stdio.h>
void matriks_persegi(int n, int matriks_A[n][n], int matriks_B[n][n], int hasil[n][n]) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            hasil[x][y] = 0;
            for (int z = 0; z < n; z++) {
                hasil[x][y] += matriks_A[x][z] * matriks_B[z][y];
            }
        }
    }
}
void printmatriks(int n, int matriks[n][n]) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            printf("%d ", matriks[x][y]);
        }
        printf("\n");
    }
}
int main() {
    int n;

    printf("Input\n");
    scanf("%d", &n);

    int matriks_A[n][n], matriks_B[n][n], hasil[n][n];

    printf("matriks A\n");
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            scanf("%d", &matriks_A[x][y]);
        }
    }
    printf("matriks B\n");
    for (int x = 0; x < n; x++) {
        for (int y = 0; y< n; y++) {
            scanf("%d", &matriks_B[x][y]);
        }
    }
    matriks_persegi(n, matriks_A, matriks_B, hasil);

    printf("\nOutput");
    printf("\nMatriks AXB\n");
    printmatriks(n, hasil);
    return 0;
}
