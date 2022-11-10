#include <stdio.h>

int buyuk(int a, int b);

int main(void)
{
    int marka, tutar;
    int buy1 = 0, buy2 = 0;
    int ford=0, fordt=0, reno=0, renot=0, mazda=0, mazdat=0, honda=0, hondat=0;
    while (marka != 111)
    {
        printf("Marka: ");
        scanf("%d", &marka);
        printf("Tutar: ");
        scanf("%d", &tutar);
        switch(marka)
        {
            case 1:reno++;renot += tutar; break;
            case 2:mazda++;mazdat += tutar; break;
            case 3:honda++;hondat += tutar; break;
            case 4:ford++;fordt += tutar; break;
            case 111: break;
            default:printf("1234 olmalı");
        }
    }
    int buy1 = buyuk(reno, mazda);
    int buy2 = buyuk(honda, ford);
    if (buy1 < buy2)
    {
        if (buy2 == honda)
        {
            printf("En fazla gelen araç markası: Honda");
        }
        else if (buy2 == ford)
        {
            printf("En fazla gelen araç markası: Ford");
        }
    }
    else
    {
        if (buy1 == reno)
        {
            printf("En fazla gelen araç markası: Reanult");
        }
        else if (buy2 == mazda)
        {
            printf("En fazla gelen araç markası: Mazda");
        }

    }
}

int buyuk(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    if (a < b)
    {
        return b;
    }
    else
    {
        return 0;
    }
}
