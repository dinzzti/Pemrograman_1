#include <stdio.h>

int main(){
    float a, b, i, j, x, y, hasil; //20 3 4 12 5 9
    printf("Input\n");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    hasil = (a-b)*i/j-(x+y);

    printf("\nOutput\n");
    printf("%.3f", hasil);
    
    return 0;
}