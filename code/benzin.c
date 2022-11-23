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

    if ( (reno + mazda + honda + ford) == 0 )
    {
        printf("Hiçbir Marka girilmemiş.");
        return 0;
    }

    buy1 = buyuk(reno, mazda);
    buy2 = buyuk(honda, ford);
    if (buy1 < buy2)
    {
        if (buy2 == honda)
        {
            printf("En fazla gelen araç markası: Honda (%d)",honda);
        }
        else if (buy2 == ford)
        {
            printf("En fazla gelen araç markası: Ford (%d)",ford);
        }
    }
    else if (buy1 > buy2)
    {
        if (buy1 == reno)
        {
            printf("En fazla gelen araç markası: Reanult (%d)",reno);
        }
        if (buy1 == mazda)
        {
            printf("En fazla gelen araç markası: Mazda (%d)",mazda);
        }
    }
    else
    {
        printf("Tum markalar esit sayıda gelmis");
    }


    buy1 = buyuk(renot, mazdat);
    buy2 = buyuk(hondat, fordt);
    if (buy1 < buy2)
    {
        if (buy2 == hondat)
        {
            printf("En fazla gelir elde edilen: Honda (%d)",hondat);
        }
        else if (buy2 == fordt)
        {
            printf("En fazla gelir elde edilen: Ford (%d)",fordt);
        }
    }
    else if (buy1 > buy2)
    {
        if (buy1 == renot)
        {
            printf("En fazla gelir elde edilen: Reanult (%d)",renot);
        }
        else if (buy1 == mazdat)
        {
            printf("En fazla gelir elde edilen: Mazda (%d)",mazdat);
        }
    }
    else
    {
        printf("Tüm tutarlar birbirine esit.");
    }
}

int buyuk(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (a > b)
    {
        return a;
    }
    if (a < b)
    {
        return b;
    }
    return 0;
}
