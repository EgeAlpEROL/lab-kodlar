#include <stdio.h>



int main(void)
{
    int gun, km;
    printf("Arabanin turu: ");
    char tur;
    scanf("%c", &tur);
    printf("kac gun:");
    scanf("%d", &gun);
    printf("kac km:");
    scanf("%d", &km);
    int ucret = 0;
    switch(tur)
    {
        case 'a':
        case 'A':ucret = gun*20 + km*18; break;
        case 'b':
        case 'B':ucret = gun*32 + km*22; break;
        case 's':
        case 'S':ucret = gun*43 + km*28; break;
        case 'p':
        case 'P':ucret = gun*51 + km*36; break;
        default:printf("A, B, S, P");
    }
    if(ucret != 0)
    {
        printf("Ödemeniz gereken tutar: %d", ucret);
    }
}



//a b s p (spor)
// kaç gün - kaç km
//arazi gün 20 km 18
// binek gün 32 km 22
//station gün 43 km 28
// spor gün 51 km 36