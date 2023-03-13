#include <stdio.h>


int main(){
    int i;
    srand(time(NULL));
    
    for(i=0 ; i<5; i++){
        printf("\n%d",rand()%50);
    }
    return 0 ;
}