#include <stdio.h>

void Matriks(int baris, int kolom, int matriks[baris][kolom], int hasil[]) {
    int index = 0;

    for (int x = 0; x < baris; x++) {
        for (int y = 0; y < kolom; y++) {
            matriks[x][y] = hasil[index];
            index++;
        }
    }
}
void printmatriks(int baris, int kolom, int matriks[baris][kolom]) {
    for (int x = 0; x < baris; x++) {
        for (int y = 0; y < kolom; y++) {
            printf("%d ", matriks[x][y]);
        }
        printf("\n");
    }
}
int main() {
    int baris, kolom;
    
    printf("Input\n");
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];
    int hasil[baris*kolom];
    for (int x = 0; x < baris * kolom; x++) {
        scanf("%d", &hasil[x]);
    }
    Matriks(baris, kolom, matriks, hasil);
    printf("\nOutput\n");
    printmatriks(baris, kolom, matriks);
    return 0;
}
