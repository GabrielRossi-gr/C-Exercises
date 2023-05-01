#include <stdio.h>


int fatorial(int n){
    if(n) return n*fatorial(n-1);
    else return 1;
}

int main(){
    int n;
    printf("\n\n Digite um valor para n: ");
    scanf("%d",&n);
    printf("\nO fatorial de %d eh %d\n\n",n ,fatorial(n));
    return 0;
}