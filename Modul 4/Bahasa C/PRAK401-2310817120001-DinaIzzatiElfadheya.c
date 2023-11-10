#include <stdio.h>

int main() {
    int bilangan;
    char simbol;

    printf("Input\n");
    scanf("%d %c", &bilangan,  &simbol);
    printf("\nOutput\n");

    for (int i = 1; i <= 50; i++) { //loop 1-50
        if (i % bilangan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}







