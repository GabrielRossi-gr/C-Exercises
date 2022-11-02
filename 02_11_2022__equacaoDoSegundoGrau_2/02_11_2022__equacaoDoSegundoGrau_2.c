#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int a,b,c;
    a=b=c=0;
    int delta=0;
    int x1,x2;
    x1=x2=0;
    
    printf("\n sugestao [A = 1] , [B = -3] , [C = 2]\n\n");

    printf("digite o A: ");
    scanf("%d",&a);
    printf("digite o B: ");
    scanf("%d",&b);
    printf("digite o C: ");
    scanf("%d",&c);
    system("cls");
    delta = cauculaDelta(a,b,c);
    //delta
    printf("\n Delta: %d",delta);
    //concavidade
    if(delta > 0){
        printf("\n Concavicade para cima");

    }else if(delta < 0){
        printf("\n Concavidade para baixo");

    }else if( delta == 0){
        printf("\n Cao existe raiz exata");

    }else{
        printf("\n erro!");

    }
    x1=caucularX1(x1,delta,a,b,c);
    x2=caucularX2(x2,delta,a,b,c);
    printf("\n x1 = %d    x2 = %d ",x1,x2);
}

int cauculaDelta(int a, int b, int c){
    if(a==0){
        a=1;
    }
    if(b==0){
        b=1;
    }
    if(c==0){
        c=0;
    }
    // regra =   b²-4.a.c  ;
    int d= (b=b*b) + (-4*a*c);
    //printf("%d",d);
    return d;
}

int caucularX1(int x1, int delta, int a, int b, int c){
    //regra -b + raizQuadradaDe delta / 2*a
    x1 = ( (b=b*-1) + sqrt(delta) )/ 2*a;
    return x1;
}
int caucularX2(int x2, int delta, int a, int b, int c){
    //regra -b - raizQuadradaDe delta / 2*a
    x2 = ( (b=b*-1) - sqrt(delta) )/ 2*a;
    return x2;
}