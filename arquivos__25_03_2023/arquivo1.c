#include <stdio.h>
#include <stdlib.h>


//ler o qaruivo 'teste.txt'
int main(){
    FILE *arq;
    char linha[255];
    arq = fopen("teste.txt","r");
    if(!arq){
        printf("\nErro de abertura\n");
        exit(EXIT_FAILURE);
    }else{
        printf("\n O que foi lido: ");
        while ((fscanf(arq,"%s\n",linha))!= EOF){
            printf("\n%s",linha);
        }        
        
    }

    printf("\n");
    return 0;
}