#include <stdio.h>

//int fibonacci(int num);


int fibonacci(int n){
    if(n==1 || n==2) return 1;

    else return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int i,n;
    printf("\ndigite quantos numeros da serie de Fibonacci deseja: ");
    scanf("%d",&n);
    printf("\na sequencia com %d numeros eh: \n",n);
    for(i=1;i<n;i++) printf("%d\t",fibonacci(i));
    printf("\n\n");

    return 0;
} 


