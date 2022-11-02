#include <stdio.h>

int main()
{
    int ales, yds, mezun;
    printf("ALES: ");
    scanf("%d", &ales);
    printf("YDS: ");
    scanf("%d", &yds);
    printf("Lisans Mezuniyet: ");
    scanf("%d", &mezun);
    if (yds < 70)
    {
        printf("YDS 70 veya daha fazla olmak zorunda (YDS: %d)", yds);
        return 1;
    }
    double ort = ales*0.5 + yds*0.25 + mezun*0.25;
    printf("Ortalama: %.2f \n", ort);
    if (ort < 60)
    {
        printf("Ortalama 60 veya daha fazla olmak zorunda");
        return 2;
    }
    else
    {
        printf("Başarılı");
    }

    return 0;
}