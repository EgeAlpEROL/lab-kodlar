#include <stdio.h>

int main(void)
{
    int sayi;
    double sonuc = 0;
    printf("Sayı: ");
    scanf("%d", &sayi);
    if (sayi < 1)
    {
        printf("0'dan büyük olmalı");
        return 1;
    }
    for (float k = 1; k <= sayi; k++)
    {
        sonuc += ((k+1) / k);
    }
    printf("Sayı: %f", sonuc);
}
