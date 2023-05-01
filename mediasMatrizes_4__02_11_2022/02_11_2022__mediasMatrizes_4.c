#include <stdio.h>
#include <stdlib.h>
#define tamanho 10  // <-- quantidade de alunos
#define tamanho2 2  // <-- quantidade de provas

int main(){
    int registroDoAluno[tamanho], notas[tamanho][tamanho2], media[tamanho2];
    for(int x=0; x<tamanho; x++){
        printf("\n digite o numero de registro do aluno: -->  ");
        scanf("%d",&registroDoAluno[x]);
    }
    system("cls");
    for( int x=0; x<tamanho; x++){
        for( int y=0; y<tamanho2; y++){
            printf("\n\n digite a nota [%d] do aluno:  %d -->  ", y ,registroDoAluno[x]);
            scanf("%d",&notas[x][y]);
            media[x]=(notas[x][y] + notas[x][y])/2;
        }
    }
    system("cls");
    for( int x=0; x<tamanho; x++){
        printf("\n\n\n aluno %d ",registroDoAluno[x]);
        for( int y=0; y<tamanho2; y++){
            printf("\n nota da prova[%d]-->  %d  ", y ,notas[x][y]);
        }
        printf("\n \t media --> %d" ,media[x]);
    }
    printf("\n\n");

}