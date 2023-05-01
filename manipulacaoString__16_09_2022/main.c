#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define quantidade 5
int main()
{
    char nomes[quantidade][20];
    int x;

    for (x=0; x<=quantidade; x++){
        printf("digite um nome: ");
        fgets(nomes[x],[20],stdin);
    }

    for(x<0; x<=quantidade; x++){
        printf("%s",nomes[x]);
    }
}
