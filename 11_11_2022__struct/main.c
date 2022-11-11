#include <stdio.h>
#include <stdlib.h>
#define tamanho 3

int main (){
    float media=0;
    float acumulador = 0;

    struct CAD_aluno
    {
        char nome[tamanho][20];
        float notas[tamanho][tamanho];
        float media[tamanho];
    };

    struct CAD_aluno aluno1;

    for(int x = 0 ; x<tamanho; x++){
        printf("\n informe o nome: ");
        fflush(stdin);
        fgets(aluno1.nome[x],19,stdin);
        fflush(stdin);
        for(int y = 0; y<tamanho; y++){
            printf("\n informe a nota %d %d : ",x,y);
            scanf("%f",&aluno1.notas[x][y]);
            acumulador = acumulador + aluno1.notas[x][y];
        }
        aluno1.media[x]=acumulador;
        acumulador=0;
    }    
    for(int x=0; x<tamanho; x++){
        printf("\n\n");
        printf("\t nome: %s",aluno1.nome[x]);
        for(int y = 0; y<tamanho; y++){
            printf("\t %0.1f",aluno1.notas[x][y]);
       
        }
        aluno1.media[x]=aluno1.media[x]/3;
        printf("\t\t media: %0.1f",aluno1.media[x]);
    }    
    printf("\n\n");


    //media = acumulador/3;
    //printf("\n nome: %s media: %0.1f",aluno1.nome,media);

}
