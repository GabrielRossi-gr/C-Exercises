#include <stdio.h>
#include <stdlib.h>


typedef struct lista
{
    int item;
    struct lista *prox;
} no;

struct lista *inicio, *aux, *novo;


int cria_lista(int n)
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

int insere_final(int n)
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
        novo = (no *) malloc (sizeof(no));
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



int mostrar_lista()
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





int main()
{
    int num, resp = 9;

    while(resp != 0)
    {

        printf("\n1 - Para criar a lista");
        printf("\n2 - Para inserir o carro no final da lista");
        printf("\n3 - Para mostrar a lista");
        printf("\n4 - Para excluir item da lista");
        printf("\n0 - Para terminar o programa\n");

        printf("\nDigite: ");
        scanf("%d", &resp);
        switch(resp)
        {
        case 0:
            printf("\nAte logo!\n\n");
            exit(EXIT_SUCCESS);
            break;
        case 1:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num);
            cria_lista(num);
            break;
        case 2:
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            insere_final(num);
            break;
        case 3:
            mostrar_lista();
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