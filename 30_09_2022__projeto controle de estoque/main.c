#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 3
char rep;
int codigo[tam],x,y,codeList=0;
char estoque[tam][20];
int main()
{

    printf("\n [0]ver estoque");
    printf("\n [1]cadastrar produto");
    printf("\n [2]retirar do estoque");
/*
//tabela do estoque
    for(x=0; x<tam; x++){
        printf("\n\n %d  |  %s",x,estoque[x]);
    }

*/
    printf("\n\n digite o codigo da operacao: ");
    scanf("%d",&codeList);
    //limpar tela
    system("cls");



    switch(codeList){
        case 0:
            verEstoque();
            break;

        case 1:
            cadastro();
            break;
        default:
            printf("\n algo nao deu certo");

    }
}




int verEstoque(){
    system("cls");
    printf("\n***************************");
    printf("\n********* ESTOQUE *********");
    printf("\n***************************");

    for(x=0; x<tam; x++){
        printf("\n %d     %s",x,estoque[x]);
    }

    printf("\n");
    system("pause");
    system("cls");
    return main();
}


int cadastro(){
    int h=0;
    system("cls");
    x=0;
    y=0;
    for(x=0; x<tam; x++){
        h=strlen(estoque[x]);

        if(h==1){
            printf("\n digite o nome do produto: ");
            fflush(stdin);
            fgets(estoque[y],20,stdin);
        }
    }
   // system("cls");
    return main();
}


