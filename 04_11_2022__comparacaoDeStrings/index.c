
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[20];
    char string2[20];
    int numero=0;  


    printf("\n digite uma palavra ");
    fflush(stdin);
    fgets(string1, 5, stdin);

    printf("\n digite uma palavra ");
    fflush(stdin);
    fgets(string2, 5, stdin);


    //retorna 1 se os caracteres forem diferentes 
    //retorna 0 se os caracteres forem iguais
    numero = strcmp(string1 , string2);     
                                       
    if(numero == 0){
        printf("\n string1: %s \n string2: %s \n \t as strings sao iguais: %d \n",string1,string2,numero);
    }else{
        printf("\n string1: %s \n string2: %s \n \t as strings sao diferentes: %d \n",string1,string2,numero);
    }

    return 0;
}