#include "header.h"

int perkalian(int angka_1,int angka_2)
{
    int hsl;
    hsl=angka_1*angka_2;
    return(hsl);
}

int maks(bil_1,bil_2)
{
    if (bil_1> bil_2)
    {
        return(bil_1);
    }
    else
    {
        return(bil_2);
    }
}
///prosedur
int bil_1,bil_2;
void input()
{

    printf(" input bilangan 1 : ");
    scanf("%d",&bil_1);
    printf(" input bilangan 2 : ");
    scanf("%d",&bil_2);
    puts("");
}
void output()
{
    printf(" bilangan terbesar : %d", maks(bil_1,bil_2));
}

