#include <stdio.h>

int main(void)
{
    int marka, tutar;
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
            default:printf("1234");
        }
    }
}