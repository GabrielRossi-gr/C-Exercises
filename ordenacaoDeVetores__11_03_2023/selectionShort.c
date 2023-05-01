#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        exitem dois tipos de ordenação 
        *ordenação interna
        *ordenação externa 
            -consiste em ordenar dados armazenados na memoria 
            auxiliar: arquivos, por exemplo 

    */
   //ordenação por seleção (selection short)

    int i,j,min,v[5];

    for(i=0 ; i<5; i++){
        printf("digite o %d numero do vetor" , i);
        scanf("%d",&v[i]);
    }

    printf("\n o vetor original: ");
    for(i=0; i<5; i++) printf("%d", v[i]);


    for(i=0; i<4; i++){
        min = i;
        for(j=(i+1); j<5; j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        if(i != min){
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }


    printf("\n o vetor ordenado: ");
    for(i=0; i<5; i++){

        printf("%d",v[i]);
    }
    printf("\n\n");

    return 0;
}