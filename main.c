#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dizi[100];
    char eleme;
    char *emir;

    printf("Lutfen bir karakter dizisi giriniz.\n");
    gets(dizi);
    printf("Karakte dizisinden cikarmak istediginiz karakter nedir ?\n");
    scanf("%c",&eleme);

    for(emir=dizi;*emir;emir++)
    {
        if(*emir==eleme)
        {
            strcpy(emir,emir+1);
        }
    }

    printf("Eleme yapildiktan sonra karakter dizimizin son hali : %s",dizi);
}
