#include <stdio.h>
#include <stdlib.h>

void main (){
    int numero;
    printf("\n digite o um numero: ");
    scanf("%d",&numero);
    tabuada(numero);
}

void tabuada(int numero){
    //regra
    // X * Y = Z
    int z=0;
    for(int x=1; x<=10; x++){
        for(int y=1; y<=10; y++){
            z=x*y;
            if(numero == z){
                printf("\n %d X %d = %d" ,x ,y ,z);
            }   
        }
    }   
}

