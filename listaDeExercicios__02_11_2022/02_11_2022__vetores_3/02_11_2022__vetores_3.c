#include <stdio.h>
#include <stdlib.h>
#define tamanho 10
void main(){

    int numeros[tamanho];
    int valorReferencia=0;
    int valoresMaiores[tamanho], valoresMenores[tamanho];
    int contador=0;

    for(int x=0; x<tamanho; x++){
        printf("\n digite um numero: ");
        scanf("%d",& numeros[x]);
    }

    printf("\n\n digite um valor de referencia: ");
    scanf("%d",&valorReferencia);
    system("cls");

    getValoresMaiores(numeros, valorReferencia, valoresMaiores);
    printf("\n\n valores maiores: ");
    for(int x=0; x<tamanho; x++){
        if(valoresMaiores[x] != 0){
            printf("\n --> %d",valoresMaiores[x]);
        }
    }

    getValoresMenores(numeros, valorReferencia, valoresMenores);
    printf("\n\n valores menores: ");
    for(int x=0; x<tamanho; x++){
        if(valoresMenores[x] != 0){
            printf("\n --> %d", valoresMenores[x]);
        }
    }

    contador = getcomparacao(numeros, valorReferencia, contador);
    printf("\n\n numero de vezes que o [%d] aparece no vetor e: %d \n\n",valorReferencia, contador);

}

int getValoresMaiores(int numeros[tamanho], int valorReferencia, int valoresMaiores[tamanho]){
    for(int x=0; x<tamanho; x++){
        valoresMaiores[x]=0;
        if(numeros[x] > valorReferencia){
            valoresMaiores[x]=numeros[x];
        }
    }
    return valoresMaiores;
}

int getValoresMenores(int numeros[tamanho], int valorReferencia, int valoresMenores[tamanho]){
    for(int x=0; x<tamanho; x++){
        valoresMenores[x]=0;
        if(numeros[x] < valorReferencia){
            valoresMenores[x]=numeros[x];
        }
    }
    return valoresMenores;
}

int getcomparacao(int numeros[tamanho], int valorReferencia, int contador){
    
    for(int x=0; x<tamanho; x++){
        if(numeros[x] == valorReferencia){
            contador++;
        }
    }
    return contador;
}