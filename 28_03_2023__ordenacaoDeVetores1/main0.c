#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,min,v[5];

    for(i=0; i<5; i++){
        printf("Digite o %dnumero do vetor: ",i+1);
        scanf("%d",&v[i]);
    }

    printf("\nO vetor original: \t");
    for(i=0; i<5; i++) printf("%d|\t",v[i]);

    for(i=0; i<5; i++){
        min = i;
        for(j=(i+1); j<5; j++){
            if(v[j] < v[min]) min = j;
        }
        if(i != min){
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }
    printf("\n\n");
    printf("\nOvetor ordenado: \t");
    for(i=0; i<5; i++) printf("%d|\t",v[i]);
    printf("\n\n");

    system("pause");
    return 0;
}