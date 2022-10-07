#include <stdio.h>
#include <stdlib.h>
#define x 3
#define y 3


int main(){


    int matriz[x][y];
    int i=0;
    int j=0;
    int test=0;

    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("\n digite o numero da cordenada x:%d  y:%d\t:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }



    for(i=0; i<x; i++){
            printf("\n");
        for(j=0; j<y; j++){
            printf("\t %d",matriz[i][j]);
        }
    }


    printf("\n ");


    for(i=0; i<x; i++){
            printf("\n");
        for(j=0; j<y; j++){
            test=matriz[i][j];
            printf("\t%d:",test);
            test=test%2;
            if(test==0){
                printf("p");
            }else{
            printf("i");
            }
        }
    }

printf("\n ");

}

