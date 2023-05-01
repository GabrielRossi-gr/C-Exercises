#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    int gg = 4;

    v = (int*) calloc(4,sizeof(int));

    v[0] = gg;

    printf("%d", v[0]);

}