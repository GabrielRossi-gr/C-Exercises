#include <stdio.h>


void tabuada(int x){
    
    for(int u=0; u<11; u++){
        printf("\n %d x %d = %d",x ,u ,u*x);
    }
}

int main(){
    int k;
    printf("\ndigite um numero: ");
    scanf("%d",&k);

    tabuada(k);

}