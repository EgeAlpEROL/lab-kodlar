#include <stdio.h>

float ortHesap(int vize, int final)
{
    float ort = vize * 0.6 + final * 0.4;
    printf("Ortalama: %.2f\n", ort);
    return ort;
}

void harfNot(float ort)
{
    if(ort < 30)
    {
        printf("FF\n");
    }
    else if(ort < 60)
    {
        printf("BB\n");
    }
    else if(ort < 80)
    {
        printf("BA\n");
    }
    else if(ort < 100)
    {
        printf("AA\n");
    }
}

int main(void)
{
    int vize, final, sayi;
    float ort;
    while(sayi!=111)
    {
        printf("Vize Puan: ");
        scanf("%d", &vize);
        printf("Final Puan: ");
        scanf("%d", &final);
        ort = ortHesap(vize, final);
        harfNot(ort);
        printf("Cikmak icin 111 yaz.\n");
        scanf("%d", &sayi);
    }
    
}