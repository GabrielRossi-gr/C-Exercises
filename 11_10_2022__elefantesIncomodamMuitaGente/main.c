#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,h;
    int numero=0;
    int y;
    int z;

    printf("\ndigite o numero de elefantes!:");
    scanf("%d",&numero);
    y=0;
    for(x=1; x<=numero; x++){
        z=x%2;
        if(z != 0){
            if(x==1){
                printf("\n%d elefante incomoda muita gente.\n",x);
            }
            else if(x>1){
                printf("\n%d elefantes incomodam muita gente.\n",x);
            }
        }else{
            printf("%d elefantes",x);
            for(y=0;y<x;y++){
                printf(" incomodam");
                if(y<x-1){
                    printf(",");
                }
            }
            printf(" muito mais.");
        }



    }

    return 0;
}
