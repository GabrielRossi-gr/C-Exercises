#include <stdio.h>
#include <stdlib.h>

struct{
    char nome[50];
    long int telefone;
    int idade;

} pessoas[5];

int main(){
    FILE *arq;
    int i;
    arq = fopen("teste.bin","rb");
    if(!arq){
        printf("\nErro de abertura");
        exit(EXIT_FAILURE);
    }

    fread(&pessoas,sizeof(pessoas),5,arq);
    fclose(arq);

    printf("\nNome\tTelefone\tIdade\n");
    for(i=0; i<4; i++){
        printf("\n%s\t%d\t%d",pessoas[i].nome,pessoas[i].telefone,pessoas[i].idade);
        printf("\n");
       
    }

     return 0;
}