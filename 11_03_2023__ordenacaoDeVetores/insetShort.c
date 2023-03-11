#include <stdio.h>

int main (){

    int i,j,temp,v[5] = {0 , 0 , 0 , 0 , 0};

    for (i=0; i<5; i++){
        printf("\n digite o %d do vetor ", i);
        scanf("%d", &v[i]);
        j= i ;
        if(i >0){
            while(v[j] < v[j-1]){
                temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
                j--;
                if(j == 0) break;
            }
        }    
    }
    printf("\n vetor ordenado:");
    for(i=0 ; i<5 ; i++) printf("%d",v[i]);
    printf("\n\n");
    return 0;
}