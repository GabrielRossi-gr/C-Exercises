#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define tamanho 10   //<-- tamanho da quantidade de produtos

int escolha=0;
int quantidade[tamanho];
char nome[tamanho][20];
int codigo[tamanho];
int verificarCode;
int compra;

int main(){

    printf("\n 1 - cadastro de produtos \n 2 - listar produtos \n 3 - retirar produtos \n 4 - sair\n\n digite: ");
    scanf("%d",& escolha);
    switch (escolha){
        case 1 :           
            cadastro();
        break;

        case 2 :          
            lista();
        break;

        case 3 :          
            retirar();
        break;

        case 4 :
        break;

        default:
        printf("\n\n erro! \n\n");
        break;
    }

}

int cadastro(){
    system("cls");
    for (int x=0; x<tamanho; x++){
        system("cls");
        printf("\n\n cadastro de produtos");

        printf("\n\n digite o nome do produto: ");
        fflush(stdin);
        fgets(nome[x],20,stdin);
        fflush(stdin);

        printf("\n digite o codigo do produto: ");
        scanf("%d",&codigo[x]);

        printf("\n digite a quantidade do produto: "); 
        scanf("%d",&quantidade[x]);       
    }
    system("pause");
    system("cls");
    return main();
}

int lista(){
    system("cls");
    for(int x=0; x<tamanho; x++){
        printf("\n -produto:%s -code:[%d] -quantidade:[%d] \t\n" ,nome[x],codigo[x],quantidade[x]);
    }
    system("pause");
    system("cls");
    return main();
}

int retirar(){
    system("cls");
    for(int x=0; x<tamanho; x++){
        printf("\n -produto:%s -code:[%d] -quantidade:[%d] \t" ,nome[x],codigo[x],quantidade[x]);
    }
    printf("\n\n digite o codigo: ");
    scanf("%d",&verificarCode);
    for(int x=0; x<tamanho; x++){
        if(verificarCode == codigo[x]){
            printf("\n -produto:%s -code:[%d] -quantidade:[%d]\t " ,nome[x],codigo[x],quantidade[x]);

            printf("\n digite a quantidade para retirar: ");
            scanf("%d",&compra);
            if(compra>quantidade[x]){
                while(compra > quantidade[x]){
                    printf("\n quantidade invalida \n digite a quantidade para retirar: ");
                    scanf("%d",&compra);
                }
                quantidade[x]=quantidade[x]-compra;
            }else{
                quantidade[x]=quantidade[x]-compra;
            }
        }
    }
    system("pause");
    system("cls");
    return main();
}