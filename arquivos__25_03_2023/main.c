#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//struct



struct{
    char nome[50];
    long long int telefone;
    int idade;
} pessoas;

int main(){
    struct tm *data;
    time_t dh;
    dh = time(NULL);
    data = localtime(&dh);
    int nasc;

    printf("\nDigite seu nome: ");
    scanf("%s",pessoas.nome);

    printf("Digite seu telefone: ");
    scanf("%ld",&pessoas.telefone);

    printf("\nDigite sua idade: ");
    scanf("%d",&pessoas.idade);
    nasc = ((*data).tm_year + 1900) - pessoas.idade;

    printf("\n Ola %s! seu telefone eh: %ld",pessoas.nome,pessoas.telefone);

    printf("\nPela sua idade sei que voce nasceu em %d\n \n ",nasc);
    printf("\nA data atual eh = %s\n",asctime(data));
    return 0;
}