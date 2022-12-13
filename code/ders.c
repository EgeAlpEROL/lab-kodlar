#include <stdio.h>

int vize[5], final[5];
float ort[5];

int hesapla()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Vize Puani: ", i+1);
        scanf("%d",&vize[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Final Puani: ", i+1);
        scanf("%d",&final[i]);
        ort[i] = final[i] * 0.4 + vize[i] * 0.6; //Hesaplama için ayrıca loop olmaması için ort burda
    }
}

int main(void)
{
    hesapla();
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Ogrenci icin\nVize: %d, Final: %d, Ortalama: %.2f\n", i+1, vize[i], final[i], ort[i]);
    }
}