#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int item;
    struct lista *prox;
    struct lista *antes;
} no;

struct lista *inicio, *aux, *novo;



int cria_lista(int n){
    if(inicio == NULL){
        inicio = (no*) malloc(sizeof(no));
        if(inicio == NULL){
            printf("\n Erro na alocacao de memoria!");
            exit(EXIT_FAILURE);
        }   
        inicio->item = n;
        inicio->prox = NULL;
        inicio->antes = NULL;
    }
    else{
        printf("\n lista nao esta vazia\n\n");
    }
}


int insere_final(int n){
    if(inicio == NULL){
        printf("\n A lista esta vazia!! ");
    }
    else{
        aux = inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        novo = (no*)malloc(sizeof(no));
        if(novo == NULL){
            printf("/nErro na alocacao de memoria");
            exit(EXIT_FAILURE);
        }

        novo->item = n;
        novo->prox = NULL;
        novo->antes = aux;
        aux->prox = novo;
    }
}


int insere_comeco(int n){
    if(inicio == NULL){
        printf("\n a lista esta vazia ");
    }
    else{
        novo = (no*)malloc(sizeof(no));
        if(novo == NULL){
            printf("\n erro na alocacao de memoria ");
            exit(EXIT_FAILURE);
        }
        aux = inicio;
        novo->item = n;
        novo->prox = inicio;
        novo->antes = NULL;
        aux->antes = novo;
        inicio = novo;
    }
}


int mostrar_lista(){
    printf("\n");
    
    if(inicio != NULL){
        aux = inicio;
        do{
            printf("%d\n",aux->item);
            aux = aux->prox;
        }while (aux != NULL);
    }
    else{
        printf("\n LISTA VAZIA!!  ");
    }
}


int excluir(int n){
    if(novo == NULL){
        printf("\nLista não existe!\n");
    }
    else{
        struct lista *anterior, *proximo;
        aux = inicio;
        printf("\nProcurando item %d\n",n);
        if(inicio->item == n){
            
            if(inicio->prox == NULL){
            free(inicio);
            inicio = NULL;
            }

        }
        else{
            aux = inicio->prox;
            free(inicio);
            inicio = aux;
        }
        printf("Item excluido!\n");
    }
    
    
    }   
    else
    {
        aux = inicio->prox;
        while(aux != NULL)
    {
    if(aux->item == n)
    {
        anterior = aux->ante;
        proximo = aux->prox;
        anterior->prox = proximo;
        if(proximo != NULL)
        proximo->ante = anterior;
        free(aux);
    break;
    }
    aux = aux->prox;
    }
    printf("Item excluido!\n");
    }
    }
}

/*

int excluir(int n){
    if(novo == NULL){
        printf("\n lista nao existe");
    }else{
        struct lista *anterior, *proximo;
        aux = inicio;
        printf("\n procurando item %d\n",n);
        if(inicio->item == n ){
            if(inicio->prox == NULL){
                free(inicio);
                inicio = NULL;
            }
            else{
                aux = inicio->prox;
                free(inicio);
                inicio = aux;
            }
            printf("\nitem excluido");
        }
        else{
            aux = inicio->prox;
            while(aux != NULL){
                if(aux->item == n){
                    anterior = aux->antes;
                    proximo = aux->prox;
                    anterior->prox= proximo;
                    if(proximo != NULL){
                         proximo->antes = anterior;
                    } 
                    free(aux);
                    break;
                }
                aux=aux->prox;
            }        
            printf("\n item excluido");
        }
    }
}
*/

int main(){
    int num,resp=9;
    while(resp != 0){
        printf("\n1- Para criar a lista");
        printf("\n2- Para inserir no final da lista");
        printf("\n3- Para inserir no inicio da lista");
        printf("\n4- Para mostrar lista");
        printf("\n5- Para excluir NO");
        printf("\n0- Paraterminar prigrama\n");
        scanf("%d",&resp);

        switch(resp){
            
            case 0:
                printf("\n ATE LOGO!! ");
                exit(EXIT_SUCCESS);
                break;
            
            case 1:
                printf("\n Digite o primeiro numero:");
                scanf("%d",&num);
                cria_lista(num);
                break;
            
            case 2:
                printf("\n Digite um numero: ");
                scanf("%d",&num);
                insere_final(num);
                break;

            case 3:
                printf("\n Digite um numero: ");
                scanf("%d",&num);
                insere_comeco(num);
                break;

            case 4:
                
                mostrar_lista();
                break;
        
            case 5:
                printf("\n Digite o numero para excluir: ");
                scanf("%d",num);
                excluir(num);
                break;

        }
    }
    return 0;
}

