#include <stdio.h>
#include <stdlib.h>

int main(){

    matriz2();

}

int matriz1(){
    int i ,j ,m[3][3];
    

    printf("\n Digitando valores para a matriz \n ");
    fflush(stdin);

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("Digite o numero da linha:%d e coluna:%d ", i, j);
            scanf("%d",&m[i][j]);
        }
    }


    printf("\n\n a matriz digitada: \n\n");

    for(i=0 ; i<3 ; i++){
        printf(" +---+---+---+\n |");
        for(j=0 ; j<3 ; j++){

            printf(" %d |", m[i][j]);
        }   


        printf("\n"); 
    }
    printf(" +---+---+---+ \n\n");
    return 0;
}


int matriz2(){

    int max = 0;
    int min = 9999999;
    int v[4][4];
    int maiorColuna[4];

    for(int x=0 ; x<4 ; x++){
        for(int y=0 ; y<4 ; y++){
            scanf("%d",&v[x][y]);

        }
    }
    for(int x = 0; x<4 ; x++){
        maiorColuna[x] = 0;
    }

    //coluna 
    for(int x=0 ; x<4 ; x++){
        
        //linha
        for(int y=0 ; y<4 ; y++){
        if(v[y][x] > maiorColuna[x]){
            maiorColuna[x] = v[y][x];
        }

        }
    }
    for(int x=0; x<4; x++){

        printf("\n maior da coluna: %d",maiorColuna[x]);
    }




printf("\n\n");
    for(int x=0 ; x<4 ; x++){
        printf("+---+---+---+---+\n| ");
        for(int y=0 ; y<4 ; y++){
            printf("%d | ",v[x][y]);
        }
        printf("\n");
    }
  printf("+---+---+---+---+\n");

    



    printf("\n valor min: %d",min);
    printf("\n valor max: %d",max);
    return 0;
}