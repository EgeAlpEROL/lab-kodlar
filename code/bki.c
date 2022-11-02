#include <stdio.h>

int main()
{
    int kilo, boy;
    printf("vücut ağırlığı (kg): ");
    scanf("%d", &kilo);
    printf("boy (cm): ");
    scanf("%d", &boy);
    double cmboy = (double)boy / 100;
    double bki = kilo / (cmboy*cmboy);
    printf("Beden kitle indeksi: %.2f", bki);
    if (bki < 18.5)
    {
        printf("İdeal kilonun altında");
    }
    else if (bki < 25)
    {
        printf("İdeal kiloda");
    }
    else if (bki < 30)
    {
        printf("İdeal kilodan fazla");
    }
    else if (bki < 40)
    {
        printf("Obez");
    }
    
    
    
}