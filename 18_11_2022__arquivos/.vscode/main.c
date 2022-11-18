#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

 

/* Definindo a struct do Arquivo*/

 

typedef struct dados
{
    char nome[20];
    char sobrenome [15];
    int idade;
    char endereco[20];
    int telefone;
    int rg;
    float fatura;
    int status;
    char nenhum[100];
} Cliente;

 

cadastro()
{
    char numstr[20];
    char resp;
    FILE *fptr; // definindo ponteiro

    Cliente fatec; // referenciando uma constante a struct

    fptr=fopen ("arquivoo.txt","ab"); // abrindo  o arquivo
 

    if(fptr == NULL) // validando abertura de arquivo
    {
        printf("\n Erro durante a Abertura do Arquivo");
        system("pause");

    }
    else
    {

        do
        {
            system("cls");
            printf("\n ------------------------------------------");
            printf("\n ------- CADASTRO DE CLIENTES -------------");
            printf("\n ------------------------------------------");

            printf("\n Digite o nome do Cliente");
            gets(fatec.nome);
            fflush(stdin);

            printf("\n Digite o Sobrenome do Cliente");
            gets(fatec.sobrenome);
            fflush(stdin);

            printf("\n Digite a idade do Cliente");
            scanf("%d",&fatec.idade);
            fflush(stdin);

            printf("\n Digite o Endereço do Cliente");
            gets(fatec.endereco);
            fflush(stdin);

            printf("\n Digite o Contato do Cliente");
            gets(numstr);
            fatec.telefone=atoi(numstr);
            fflush(stdin);

            printf("\n Digite o Rg do Cliente");
            gets(numstr);
            fatec.rg = atoi(numstr);
            fflush(stdin);

            printf("\n Digite o valor da Fatura do Cliente");
            gets(numstr);
            fatec.fatura = atof(numstr);
            fflush(stdin);

            fwrite(&fatec,sizeof(fatec),1,fptr);

            printf("\n Deseja continuar o cadastro [S]im ou [N]ão");
            resp= getchar();
            fflush(stdin);
        }
        while(resp == 's' || resp =='S');

        fclose(fptr);
    }
}


consulta()
{

 

}


int main(void)
{
    int op;
    do
    {
        system("cls");
        printf("\n [1] - Cadastro de Clientes");
        printf("\n [2] - Consulta por Cliente");
        printf("\n [3] - Exibir Relatório");
        printf("\n [4] - Alteração Dados Cadastro");
        printf("\n [5] - Remover Registros");
        printf("\n [0] - sair");

 

        printf("\n Informe OPção Desejada");
        scanf("%d",&op);
        fflush(stdin);

 

        switch(op)
        {
        case 1:
            cadastro();
            break;
        case 2:
            consulta();
            break;
        case 3:
            printf("\n Função em desenvolvimento");
            break;
        case 4:
            printf("\n Função em desenvolvimento");
            break;
        case 5:
            printf("\n Função em desenvolvimento");
            break;
        case 0:
            exit(0);
            break;
        default :
            printf("\n Opção Invalida ..tente novamente");
            system("pause");
        }
    }
    while(op !=6);
}