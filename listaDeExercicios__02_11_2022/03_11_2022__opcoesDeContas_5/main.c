#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main(){
    int x,y,z;
    char letra;

    printf("\n digite um numero -->");
    scanf("%d",& x);
    printf("\n digite um numero -->");
    scanf("%d",& y);
    system("cls");
    printf("a -> X+Y\n b -> X-Y\n c -> X/Y\n d -> X*Y\n e -> X^Y\n f -> raiz quadrada de x");

    printf("\n\n escolha a opcao");
    fflush(stdin);
    scanf("%c",& letra);
    letra=tolower(letra);

    switch (letra)
    {
    case 'a':
        z=x+y;
        printf("\n a soma de: %d + %d = %d",x,y,z);
        break;
    
    case 'b':
        z=x-y;
        printf("\n a subtracao de: %d - %d = %d",x,y,z);
        break;
    
    case 'c':
        z=x/y;
        printf("\n a divisao de: %d / %d = %d",x,y,z);
        break;
    
    case 'd':
        z=x*y;
        printf("\n a multiplicacao de: %d x %d = %d",x,y,z);
        break;
    
    case 'e':
        z= pow(x ,y);
        printf("\n a potenciacao de: %d ^ %d = %d",x,y,z);
        break;
    
    case 'f':
        z=sqrt(x);
        printf("\n a raiz quadrada de %d = %d",x,z);
        break;
    
    default:
        printf("\n\n erro! \n\n");
        break;
    }

}