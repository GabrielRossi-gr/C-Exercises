#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero=0;
    int cont=0;
    int espaco=0;
    printf("por favor digite um numero.  sugestao=(numeros pares e menores ou iguais a 10)\n\n digite um numero: ");
    scanf("%d",&numero);
    printf("\n\n\n\n");
    head(numero, cont, espaco);
    body(numero, cont, espaco);
    printf("\n\n\n");
    system("pause");
}

//funcao head
int head(numero, cont, espaco){
    int i=0;
    int j=3;
    int o=0;
    int z;
    int t=0;
    //topo
    t=numero-6;
    printf("   ");
    for(z=0; z<t; z++){
        printf("*");
    }
    printf("      ");
    for(z=0; z<t; z++){
        printf("*");
    }
    printf("\n");

    //parte 1
    o=numero-4;
    printf("  ");
    for(z=0; z<o; z++){
        printf("*");
    }
    printf("    ");
    for(z=0; z<o; z++){
        printf("*");
    }
    printf("\n");

    //parte 2
    printf(" ");
    i=numero-2; 
    for(z=0; z<i; z++){
        printf("*");
    }
    printf("  ");
    for(z=0; z<i; z++){
        printf("*");
    }
    printf("\n");

    //parte 3
    int h=numero*2;
    for(int x=0; x<h; x++){
        printf("*");
    }
    printf("        i love you  (^U^)");
}


//funcao body
int body(numero, cont, espaco){
    cont=numero;
    for(int y=0; y<numero; y++){
        printf("\n");
        for(int h=0; h<espaco; h++){
            printf(" ");
        }
        for(int x=0; x<cont; x++){
            printf("*");
        }
        for(int x=0; x<cont; x++){
            printf("*");
        }
        cont--;
        espaco++;
    }
}
/* ****      ****
  ******    ******
 ********  ******** 
********************
********************
 ******************
  ****************
   **************
    ************
     **********
      ********
       ******
        ****
         **
*/