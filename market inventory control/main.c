#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int cont,x,code,codeProdutos[10],nprateleira,y,backup,backup2,quantidadeProduto[10];
for(x=0;x<9;x++){quantidadeProduto[x] = codeProdutos[x] = 0;}
do{

printf("\nDIGITE O CODIGO DE OPERACAO\n__________________________________________________________________ \nCADASTRAR PRODUTO [1] \nRETIRAR PRODUTO [2] \nSAIR [0]");
printf("\n\n\n digite o codigo: ");
scanf("%d",&code);

if(code==1){
        for(;;){
            system("cls");
            printf("\n CADASTRO DE PRODUTOS \n ");
            for(x=0;x<9;x++){
                printf("\n prateleira[%d]  code produto[%d]  quantidade produto[%d]",x,codeProdutos[x],quantidadeProduto[x]);
            }
            printf("\n__________________________________________________________________\n\n DIGITE[999] PARA SAIR");
            printf("\n digite o numero da prateleira: ");

            scanf("%d",&nprateleira);
            if(nprateleira==999){
                system("cls");
                break;
            }
            system("cls");

            printf("prateleira[%d] codigo produto[%d] quantidade[%d] \n__________________________________________________________________\n ",nprateleira,codeProdutos[nprateleira] ,quantidadeProduto[nprateleira]);


            printf("\n\n DIGITE [0 ou 999] PARA SAIR ");
            printf("\n crie um codigo prara o produto: ");
            scanf("%d",&backup);
            if(backup==999){
                system("cls");
                break;
            }

            if(codeProdutos[nprateleira]==0){
                if(backup>0){
                    printf("\a");
                    codeProdutos[nprateleira]=backup;
                }
            }
                else{

                system("cls");
                printf("voce nao pode alteirar valores cadastrados; \n");
                system("pause");
                system("cls");
                break;
                }
            printf("diga a quantidade do produto: ");
            scanf("%d",&backup2);

            if(backup2==999){
                system("cls");
                break;
            }
            if(backup2<=0){
                system("cls");
                break;
            }
                else{
                    quantidadeProduto[nprateleira]=backup2;
                }
        }
}
if(code==2){
        system("cls");
        printf("[RETIRAR PRODUTOS]");
        for(x=0;x<9;x++){ printf("\n prateleira:[%d]  code produto:[%d]",x,codeProdutos[x]);}

        printf("digite o codigo do produto");

}

}while(code>0);



return 0;
}





