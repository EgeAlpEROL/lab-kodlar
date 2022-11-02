#include <stdio.h>

int main(void)
{
    int sayi, i, j;
    printf("Sayı gir: ");
    scanf("%d", &sayi);
    for (i = 1; i <= sayi; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}