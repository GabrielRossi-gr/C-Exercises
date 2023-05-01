#include <stdio.h>
#include <stdlib.h>
//tamanho dos vetores;
#define size 4
int main()
{
    char word[size], attempt1[size],attempt2[size],attempt3[size];
    int validacaoPalavra[size];
    int sizeWord=0;
    int x=0;
    int y=0;
    char teste1[2],teste2[2];
    int contadorCorreto=0;



        // word add;
///
///
word[0]='a';
word[1]='b';
word[2]='c';

attempt1[0]='a';
attempt1[1]='b';
attempt1[2]='c';

for(x=0;x<size;x++){
    validacaoPalavra[x]=0;
}


        //tamanho da palavra secreta
    sizeWord=0;
    while(word[sizeWord] != '\0'){
        printf("%c",word[sizeWord]);
        sizeWord++;
    }
    //sizeWord--;
    printf("\n ---> a palavra tem [%d] letras",sizeWord);

/*

        //attempt1 add
    printf("\n tentativa [1]\n digite a palavra:  ");
    fflush(stdin);
    fgets(attempt1,size,stdin);


*/


        // verificar se contem a letra da  palavra
        //regras
        /*
        1 == contem letra
        2 == contem letra e a posição esta correta
        3 == nao contem a letra
        */
    printf("\n");
    for(x=0; x<sizeWord; x++){

        for(y=0; y<sizeWord; y++){
            if(word[x]==attempt1[y] && x!=y){
                validacaoPalavra[x]=1;
            }
            if(word[x]==attempt1[y] && x==y){
                validacaoPalavra[x]=2;
            }
            else{
                validacaoPalavra[x]=3;
            }
            /*
            printf("\n X:%d__Y:%d",x,y);
            printf("\n %d__",validacaoPalavra[x]);
            //
            if(validacaoPalavra[x]==1){
            printf("|");
            }else if(validacaoPalavra[x]==2){
            printf("O");
            contadorCorreto++;
            }else if(validacaoPalavra[x]==3){
            printf("X");
            }

            printf("\n");
            //
            */

        }

    }

    //imprmir na tela se acertou ou nao
    //regras
    //validaçao=1 |    contem a letra so esta no lugar errado
    //validaçao=2 O    letra e lugar correto
    //validaçao=3 X    tudo errado
    printf("\n\n\n");
    for(x=0; x<size; x++){
        if(validacaoPalavra[x]==1){
            printf("|");
        }else if(validacaoPalavra[x]==2){
            printf("O");
            contadorCorreto++;
        }else if(validacaoPalavra[x]==3){
            printf("X");
        }
    }

    if(contadorCorreto==size){
        printf("\n---- parabens vs acertou a palavra ----\n ");
    }



}
