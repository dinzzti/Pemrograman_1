#include<stdio.h>
#include<string.h>

void main(){
    char  a[50];
    char  b[50];
    char  c[50];
    char  d[50];
    char  e[50];
    char  f[50];
    char  g[50];

    printf("Input\n");
    printf("Nama                    : ");
    gets(a);
    printf("NIM                     : ");
    gets(b);
    printf("Kelas Paralel           : ");
    gets(c);
    printf("Tempat/Tanggal Lahir    : ");
    gets(d);
    printf("Alamat                  : ");
    gets(e);
    printf("Hobby                   : ");
    gets(f);
    printf("Ho. HP                  : ");
    gets(g);

    printf("\nOutput\n");
    printf("Nama                    : %s\n", a);
    printf("NIM                     : %s\n", b);
    printf("Kelas Paralel           : %s\n", c);
    printf("Tempat/Tanggal Lahir    : %s\n", d);
    printf("Alamat                  : %s\n", e);
    printf("Hobby                   : %s\n", f);
    printf("No. HP                  : %s\n", g);

}