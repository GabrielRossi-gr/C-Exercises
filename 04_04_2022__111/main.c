#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1,n2,n3,n4;
    float b1,b2,b3,b4;


    printf("digite o seu salario ");
    scanf("%f",&b1);

    if(b1<=300){
        b2=(b1*0.35)+b1;
        printf("seu salario %0.2f \n \n \n \n ", b2);
    }
    if(b1>300){
        b2=(b1*0.15)+b1;
        printf("seu salario %0.2f \n \n \n \n ",b2);
    }

}
