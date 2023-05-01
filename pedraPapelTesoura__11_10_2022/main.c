#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char jogador1[1][10];
    char jogador2[1][10];

    printf("\ndigite [PEDRA,PAPEL,TESOURA]");
    fgets(jogador1[0],10,stdin);
    PRINTF("\ndigite [PEDRA,PAPEL,TESOURA]");
    fgets(jogador2[0],20,stdin);
x=0;
while(x!=1){
        x++;
        if(jogador1[0]=="PEDRA" &&jogador2[0]=="TESOURA"){
            printf("JOGADOR1");

        }else{
            printf("JOGADOR2");
             break;
        }


        if(jogador1[0]=="PAPEL" &&jogador2[0]=="PEDRA"){
            printf("JOGADOR1");

        }else{
            printf("JOGADOR2");
            break;
        }


        if(jogador1[0]=="TESOURA" &&jogador2[0]=="PAPEL"){
            printf("JOGADOR1");

        }else{
            printf("JOGADOR2");
            break;
        }


    }

}
