#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

//  venda media
int vmedia,preco;
char REP;

vmedia = preco =0;

    do{
        //venda media por mes
     printf(" \n digite a venda media do produto--> ");
     scanf("%d",&vmedia);
        //preco atual do produto
     printf("\n digite o preco atual do produto--> ");
     scanf("%d",&preco);

     if(vmedia<500 && preco<30){
        preco=preco+(preco*0.10);
        printf("\n AUMENTO...(10%)  preco modificado: %d",preco);
     }
     if(vmedia>=500 && vmedia<1.200 && preco>=30 && preco<80){
        preco=preco+(preco*0.15);
        printf("\n AUMENTO...(15%)  preco modificado: %d",preco);
     }else if(vmedia>=1.200 && preco >= 80){
        preco=preco-(preco*0.20);
        printf("\n REDUCAO...(-20%) preco modificado: %d",preco);
     }

     printf("\n calcular novamente?  |s|  ou |n| -->");
     fflush(stdin);
     scanf("%c",&REP);
     fflush(stdin);

    }while(REP != 'n');
return 0;
}
