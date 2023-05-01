#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanhoVetor = 0;
    int numero;
    int *v, *k;
    k=(int*)calloc(2,sizeof(int)); 
   
    do{
        printf("\n digite um numero \n");
        scanf("%d", &numero); 
       
        v=(int*)calloc(tamanhoVetor+1,sizeof(int));
        v[tamanhoVetor]=numero;
        
         
        //só NÃO passa a primeira vez
        if(tamanhoVetor > 0){
            if(numero > 0){
                free(k);
                k=(int*)calloc(tamanhoVetor+1,sizeof(int));
                k[tamanhoVetor]=v[tamanhoVetor];        
            }
        }
        else{ //só passa a primeira vez
            k=(int*)calloc(tamanhoVetor+1,sizeof(int));
            k[tamanhoVetor]=v[tamanhoVetor];
        }

        printf("\n---%d",k[tamanhoVetor]);
        free(v);
        tamanhoVetor++;
    }while(numero > 0);
    
    
    printf("%d",tamanhoVetor);


    for(int i=0; i<tamanhoVetor; i++){
        printf("\n--> %d",k[i]);
    }



    //atribuir tamanho da moria no v
    //v=(int*) calloc(tamanhoVetor+1 , sizeof(int));
/*
    if(v == NULL){
        printf("\n bosta de sistema operacional");
        exit(EXIT_FAILURE);
    }
*/

}