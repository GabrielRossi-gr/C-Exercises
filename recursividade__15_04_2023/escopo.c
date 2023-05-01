#include <stdio.h>

void Func1(){
    int b = -100;
    printf("valor de B dentro da funcao func1 %d\n",b);

}


void Func2(){
    int b = -200;
    printf("valor de B dentro da função func2 %d\n",b);

}

int main(){
    int b = 10;
    printf("valor de b %d\n ",b);
    for(int b=0; b<9; b++){
        printf("a");
    }
    b=20;
    Func1();
    printf("\nvalor de b: %d\n",b);
    Func2();
    printf("valor de b: %d\n",b);
    return 0;

}