#include <stdio.h>
#include <string.h>

void pesankode(char kode[], char pesan[]) {
    for (int x = 0; x < strlen(kode); x++) {
        if (kode[x] == ' ' && pesan[x] == ' ') {
            pesan[x] = ' ';
        } else if (kode[x] == pesan[x]) {
            pesan[x] = '*';
        } else {
            pesan[x] = '#';
        }
    }
}
int main() {
    char kode[100], pesan[100];

    printf("Input\n");
    fgets(kode, sizeof(kode), stdin);
    kode[strcspn(kode, "\n")] = '\0';  
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = '\0'; 

    printf("\nOutput\n");
    if(strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu \n");
        return 0;
    }
    pesankode(kode, pesan);

    int bintang = 0, pagar = 0;

    for(int x = 0; x < strlen(kode); x++) {
        if(pesan[x] == '*') {
            bintang++;
        } else if(pesan[x] == '#') {
            pagar++;
        }
    }
    printf("%s\n", pesan);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}