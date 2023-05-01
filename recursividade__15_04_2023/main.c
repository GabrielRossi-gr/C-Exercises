#include <stdio.h>
#include <stdlib.h>

void ordenar(int *v){
    int i,j;
    int temp;

    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(v[i] > v[j]){
                    temp = v[j];
                    v[j] = v[i];
                    v[i] = temp;
            }
        }
    }
}

int main(){
    int vetor[10];
    int x;
    for(x=0; x<10; x++){
        printf("\ndigite o %do numero para o vetor: ",x+1);
        scanf("%d",&vetor[x]);
    }

    ordenar(&vetor);

    for(x=0; x<10; x++) printf("%d ",vetor[x]);
}











   
    /*


float dobro(float a){
    return (a*2);
}


float dobro(float a);


float num;
   printf("\n digite um numero: ");
   scanf("%f",&num);
   num=dobro(num);
   printf("\n o dobro do numero é %0.3f \n\n",num);
    return 0 ;






int verificaPar(int x){
    if(x%2){
        return 0;
    }else{
        return 1;
    }
}




    int num ;
    printf("\n digite um numero: ");
    scanf("%d",&num);
    if(verificaPar(num)){
        printf("\n numero e par\n");
    }else{
        printf("\n numero e impar\n");
    }
    return 0;
    */