#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define tan 10

int main(){

    int vet[tan];
    int n=0, x=0;
    int nMaior=0;

    printf("\n digite o tamanho do vetor: ");
    scanf("%d",&n);
    if(n>0){
       n= n-1;
    }
    for (x=0; x<=n; x++){
        printf("\n digite um numero: ");
        scanf("%d",&vet[x]);
            if(nMaior<vet[x]){
            nMaior=vet[x];
        }
    }

    printf("\n maior numero: %d \n# # # # # # # # # # #",nMaior);

    return 0 ;
}
