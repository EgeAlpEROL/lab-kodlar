#include <stdio.h>

int main(void)
{
    int sayi, i, j, k;
    printf("Sayı gir: ");
    scanf("%d", &sayi);
    for (i = 0; i < sayi; i++)
    {
        for (j = i; j < sayi; j++)
        {
            printf(" ");
        }
        for (k = 0; k < (2*i) + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
