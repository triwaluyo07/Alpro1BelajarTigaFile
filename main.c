#include "header.h"

int main()
{
    int angka_1;
    int angka_2;

    printf("Angka 1 : ");
    scanf("%d",&angka_1);
    printf("Angka 2 : ");
    scanf("%d",&angka_2);
    printf("hasil kali : %d",perkalian(angka_1,angka_2));
    puts("\n");
    input();
    output();
    return 0;
}
