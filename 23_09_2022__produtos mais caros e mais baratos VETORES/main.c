#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char produtos[4][20];
    int preco[4];
    int x;
    int nDmaior, precoDmaior, maior;
    int nomeDmenor;
    maior=0;

    for(x=0;x<4;x++){
        printf("\n digite nome do produto: ");
        fflush(stdin);
        fgets(produtos[x],20,stdin);
        fflush(stdin);

        printf("\n digite o preco do produto: ");
        scanf("%d",preco[x]);

    if(preco[x] > maior){
        maior=preco[x];
        nDmaior=x;
    }
    }





        printf("\n produto maior: [%s]", produtos[nDmaior]);
        printf("\n %s",produtos[0]);



}
