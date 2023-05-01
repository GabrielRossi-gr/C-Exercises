#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamanho 2
#define ano 2022

void main(){
    int menu;
    
    int diaPagamento[30], mesPagamento[12], anoPagamento[ano];
    
    struct cadastro{
        char nomeCliente[20];
        int codigocliente[tamanho];
    };
    struct cadastro cadastrar;

    struct boletos{
        int boltoDoCliente[tamanho];
        int diaVencimento[tamanho];
        int mesVencimento[tamanho];
        int anoVencimento[tamanho];
    };
    struct boletos cadastrarboletos;

    int rep=9999;
    while(rep != 0){
        printf("\ndigite o numero\n");
        printf("\n[1]cadastrar cliente");
        printf("\n[2]cadastrar boleto");
        printf("\n[3]");
        printf("\n[4]");
        printf("\n[5]sair"); 
        printf("\ndigite: ");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            system("cls");
            fflush(stdin);
            printf("\ncadastro: \n");
            for(int x=0; x<tamanho; x++){

                printf("\np:%d   digite o codigo do cliente: ",x);
                scanf("%d",&cadastrar.codigocliente[x]);
            }
            break;
        case 2:
            system("cls");
            printf("\ncadastro de boletos\n");
                for(int x=0; x<tamanho; x++){
                    system("cls");
                    printf("\n p:%d",x);
                    printf("\n cadastrar boletos do codigo: %d",cadastrar.codigocliente[x]);

                    printf("\ndigite o dia de vencimento do boleto: ");
                    scanf("%d",&cadastrarboletos.diaVencimento[x]);

                    printf("\ndigite o mes de vencimento do boleto: ");
                    scanf("%d",&cadastrarboletos.mesVencimento[x]);

                    printf("\ndigite o ano de vencimento do boleto: ");
                    scanf("%d",&cadastrarboletos.anoVencimento[x]);
                }
            break;

        case 5:
            rep = 0;
        break;

        default:
            break;
        }
    }
}
