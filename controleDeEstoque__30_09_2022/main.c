#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 3
char rep;
int codigo[tam],x,y,codeList=0;
int quantidade[tam];
char estoque[tam][20];
int contadorDoEstoque[tam];
int preco[tam];




int main(){
    x=0;
    while(contadorDoEstoque[x]<tam){
        contadorDoEstoque[x]=0;
    //validação de atribuição de 0 no vetor de apoio: contadorDeEstoque
    //   printf("\n %d",contadorDoEstoque[x]);
        x++;
    }

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
    printf("\n\n______________________________________________");

    for(x=0; x<tam; x++){
        printf("\n codigo: %d  |  nome: %s   preco: %d",x ,estoque[x] ,preco[x]);
        printf("\n______________________________________________");
    }
    printf("\n\n");

    printf("\n");
    system("pause");
    system("cls");
    return main();
}


int cadastro(){
    int h=0;
    system("cls");
    y=0;
    x=0;
    while(h<tam){
        if(contadorDoEstoque[h]==0){
            printf("_________________________________________");
            printf("\n digite o nome do produto: ");
            fflush(stdin);
            fgets(estoque[h],20,stdin);
            contadorDoEstoque[h]=1;

            printf("\n digite a quantidade");
            scanf("%d",&quantidade[h]);


            printf("\n digite o preco do produto: ");
            scanf("%d",&preco[h]);
        }
        h++;
    }


    system("cls");
   // system("cls");
    return main();
}



