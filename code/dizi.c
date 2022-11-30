#include <stdio.h>
//main 5 int dizi
//ortbul(int[x])

double orthesapla(int dizi[5])
{
    double ort;
    for (int i = 0; i < 5; i++)
    {
        ort += dizi[i];
    }
    ort /= 5.0;
    return ort;
}

int main(void)
{
    int saylar[5];
    double ort;
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Sayi: ", i+1);
        scanf("%d", &saylar[i]);
        ort = orthesapla(saylar);
    }
    printf("Ortalama: %.2f", ort);

}
