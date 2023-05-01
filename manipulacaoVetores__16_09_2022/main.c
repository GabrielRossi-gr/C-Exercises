#include <stdio.h>
#include <stdlib.h>
#define tamanhoVetor 10
#define tamanhoRep 9
int main(){
    int n[tamanhoVetor],imper[tamanhoVetor],par[tamanhoVetor];
    int x=0;

    while(x<=tamanhoRep){
        printf("digite 10 numeros: ");
        scanf("%d",&n[x]);

        //zerando espaço vazio
        par[x]=imper[x]=0;

         if(n[x]%2 == 0){
            par[x]=n[x];
        }else{
            imper[x]=n[x];
        }
        x++;
    }

    printf("impares | pares \n");
    for(x=0; x<=tamanhoRep; x++){
        printf("%d        |     %d \n",imper[x],par[x]);
    }
    return 0;
}
