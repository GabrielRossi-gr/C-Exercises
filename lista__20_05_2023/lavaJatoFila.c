#include <stdlib.h> 
#include <stdio.h>



typedef struct fila
{
    int item;
    struct fila *prox;
} no;

struct fila *inicio, *aux, *novo;



int cria_lista_lavar(int n)
{
    if(inicio == NULL)
    {
        inicio = (no *)malloc(sizeof(no));
        if(inicio == NULL)
        {
            printf("\nErro na alocacao de memoria!\n");
            exit(EXIT_FAILURE);
        }
        inicio -> item = n;
        inicio -> prox = NULL;
    }
    else
    {
        printf("\nLista nao esta vazia!!!\n\n");
    }
}


int mostrar_lista_lavar()
{
    if(inicio == NULL)
    {
        printf("\nLista esta vazia");
    }
    else
    {
        aux = inicio;
        printf("\n");

        do
        {
            printf("%d\n", aux->item);
            aux = aux->prox;
        }while(aux != NULL);
    }
}


int insere_lavar(int n)
{
    if(inicio == NULL)
    {
        printf("\nA lista esta vazia!!!\n\n");
    }
    else
    {
        aux = inicio;
        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        novo = (no *) malloc(sizeof(no));
        if(novo == NULL)
        {
            printf("\nErro na alocacao de memoria\n");
            exit(EXIT_FAILURE);
        }


        novo->item = n;
        novo->prox = NULL;
        aux->prox = novo;
    
    }
}





int excluir_item(int n)
{
    struct lista *antes, *depois;

    
    if(inicio->item == n)
    {
        if(inicio->prox == NULL)
        {
            free(inicio);
            inicio == NULL;
        }
        else
        {
            aux = inicio->prox;
            free(inicio);
            inicio = aux;
        }
    }
    else
    {
        aux = inicio;
        antes = inicio;

        do
        {
            if(aux->item == n)
            {
                depois = aux->prox;
                antes->prox = depois;
                free(aux);
                break;
            }
            antes = aux;
            aux = aux->prox;
        }
        while(aux != NULL);

    }
}





int main(){
int num, resp = 9;

    while(resp != 0)
    {
        printf("\n1 - criar lista\n");
        printf("\n2 - Para inserir na fila LAVAR");
        printf("\n3 - mostrar a fila\n");

        printf("\n4 - Para inserir na fila SECAR");
        printf("\n5 - mostrar a fila\n");
        
        printf("\n6 - Para iserir na fila ENTREGAR");
        printf("\n7 - mostrar a fila\n\n");
        
        printf("\n0 - sair desta merda");



        printf("\nDigite: ");
        scanf("%d", &resp);
        
        system("cls");

        switch(resp)
        {
        case 0:
            printf("\nAte logo!\n\n");
            exit(EXIT_SUCCESS);
            break;
        case 1:
            //1 - criar lista
            printf("\nDigite o numero do carro: ");
            scanf("%d", &num);
            cria_lista_lavar(num);
            break;




        case 2:
            //Para inserir na fila LAVAR
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            insere_lavar(num);
            break;

        case 3:
            //3 - mostrar a fila LAVAR
            mostrar_lista_lavar();
            break;




        case 4:
            printf("\nDigite o numero para excluir: ");
            scanf("%d", &num);
            excluir_item(num);
            break;
        }
    }
    return 0;

}