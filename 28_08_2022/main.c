#include <stdio.h>
#include <stdlib.h>

int main()
{
int njogador,i,kkk,z,idade,altura,peso,jmenor,contidade,contaltura,contkilos;
njogador=0;
kkk=i=z=0;
contidade=0;
while(z<5){
z++;
    printf("\n time: %d   ################################################ \n\n",z);
    while(i<5){
        i++;
        printf("\n digite a idade do jogador: %d\n-->",i);
        scanf("%d",&idade);

        ///acumulador das idades de TODOS os jogadores
        contidade=contidade+idade;

        ///quantidade de jogadores menores de idade no time
        if(idade<18){
            jmenor++;
        }
        printf("digite o peso do jogador: %d\n-->",i);
        scanf("%d",&peso);
        ///porcentagem dos jogadores com mais de 80 kilos
        if(peso>80){
            contkilos=contkilos+peso;
        }

        printf("digite a altura do jogador: %d\n-->",i);
        scanf("%d",&altura);
        printf("\n\n\n");
        ///acumulador de altura
        contaltura=contaltura+altura;
    contidade=contidade/5;
    printf("%d",contidade);
    }
    i=0;
    contidade=0;
}
kkk=contaltura/25;
printf("\n quantidade de jogadores menores: %d",jmenor);
printf("\n media de altura: %d");


//25=100


return 0;
}
