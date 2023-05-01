#include <stdio.h>

int main (){
    //o ponto de parada é quando nao ha troca 
    int v[5];
    int i, trocou,temp;
    for(i=0 ; i<5; i++){
        printf("\n digite o %d numero do vetor: ", i);
        scanf("%d",&v[i]);
    }
    printf("\n vetor original: ");
    for(i= 0; i<5; i++) printf("%d",v[i]);


    do{
        trocou = 0;
        for(i=0; i<5; i++){
            if(v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                trocou = 1;
            }
        }
    }while(trocou);
    printf("\n vetor ordenado: ");
    for(i=0; i<5; i++) printf("%d",v[i]);
    printf("\n\n");
    return 0;

}