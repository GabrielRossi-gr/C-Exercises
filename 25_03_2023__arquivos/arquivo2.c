#include <stdio.h>
#include <stdlib.h>

// arquivos binarios 

struct
{
    char nome[50];
    long int telefone;
    int idade;

} pessoas[5];

int main(){
    FILE *arq;
    int i;
    for(i=0; i<5; i++){
        printf("\nDigite nome da %dpessoa: ", i+1);
        scanf("%s",pessoas[i].nome);
        
        printf("\nDigite o telefone: ");
        scanf("%d",&pessoas[i].telefone);

        printf("\nDigite a idade: ");
        scanf("%d",&pessoas[i].idade);

    }

    arq = fopen("teste.bin","w+b");
    if(!arq){
        printf("\nErro de abertura");
        exit(EXIT_FAILURE);
    }
    fwrite(&pessoas,sizeof(pessoas),5,arq);
    fclose(arq);
    return 0;
}