#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char produtos[4][20];
    int preco[4];
    int nDmaior;
    int nDmenor;
    int precoDmaior[4];
    int nomeDmenor;
    int x=0;
    int precoMenor=99999;
    int precoMaior=0;
    char rep;

   // for(x=0; x<4; x++){
        do{

            printf("\n digite nome do produto: ");

            //entrada
            fflush(stdin);
            fgets(produtos[x],20,stdin);

            printf("\n digite o preco do produto: ");
            scanf("%d",& preco[x]);

            // produto maior e menor
            if(preco[x] > precoMaior){
                precoMaior=preco[x];
                nDmaior=x;
            }
            if(preco[x]<precoMenor){
                precoMenor=preco[x];
                nDmenor=x;
            }

            x++;
        //continuar?
        printf("\n [quer continuar] [s/n]");
        fflush(stdin);
        scanf("%c",&rep);

            // validacao
        if(rep != 'n' || rep != 's'){
            while(rep != 'n' || rep != 's'){
                if(rep == 's' || rep == 'n'){
                    break;
                }
                printf("\n !! nao entendi,\n por favor digite de novo:");
                fflush(stdin);
                scanf("%c",& rep);
            }
        }
    }while(rep == 's');
  //}




    printf("\n------------------\n-produto maior:%s  --preco:%d \n",produtos[nDmaior], precoMaior);
    printf("\n-produto mais barato:%s  --preco:%d\n------------------",produtos[nDmenor], precoMenor);






}
