#include <stdio.h>
#include <stdlib.h>

int main()
{

    char estrelas[3][8];
    int media=0;
    int contador=0;
    int x,y;
    int z=0;

    for(y=0; y<3; y++){
        printf("\mdigite o numero de estrelas'*':\n");
        fgets(estrelas[y],8,stdin);
        for(x=0; x<5; x++){
            if(estrelas[y][x] == '*'){
                contador=contador+1;
            }else{
                contador=contador+0;
            }
        }
        system("cls");
    }
    printf("\nmedia do hotel:\n");
    media=contador/3;
    for(x=0; x<media; x++){
        printf("*");
    }
}
