#include <stdio.h>
//entrada e saida de dados 
#include <stdlib.h>
//gerenciamento de memoria 

int main(){
    //inteiro 4 bytes
    float *v;
    int i,tam;
    printf("\n digite o tamanho do vetor ");
    scanf("%d",&tam );


    if(tam<1){
        printf("\n ERRO: tamanho invalido");
        exit(EXIT_FAILURE);

    }
    v = (float*) calloc(tam+1,sizeof(float));
    if(v == NULL){   //colocando um tamanho de memoria no ponteiro 'v'
        // 'v' recebe float(casting)        função calloc(tamanho do vetor , tamanho de cada linha em bytes);
        //                                  
        printf("\n\n ERRO memoria insuficiente\n\n");
        exit(EXIT_FAILURE);
    }

    printf("\n digitando os elementos do vetor criado\n");
    for(i=0; i<tam; i++){
        printf("\n digite o %d o numero do vetor" , i+1);
        scanf("%f",&v[i]);
    }
    printf("\n\n numeros digitados\n");
    for(i=0; i<tam; i++) printf("\n %3.1f", v[i]);
    printf("\n\n");
    free(v);
    return 0 ;

}


