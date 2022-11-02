#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
int idade;
float peso,altura;
char contador,corDosOlhos,corDoCabelo;
float idadeMaior,idadeMenor,MediaIdade,contadorPessoas,contadorOlhosAzuis,ruivoSemOlho;
idade=0;
peso=altura=idadeMaior=idadeMenor=MediaIdade=contadorPessoas=contadorOlhosAzuis=ruivoSemOlho=0;



//contador para calcular a media pergunta (B)
float contM;

    do{
        printf("\n================================================================\n\n");
        contadorPessoas++;
        printf("\ndigite a idade : ");
        scanf("%d",&idade);
        //
        printf("\n digite o peso : ");
        scanf("%f" ,&peso);
        //
        printf("\n digite a altura : ");
        scanf("%f",&altura);
        //
        printf("\n digite a cor dos olhos [A]azul [P]preto [V]verde [C]castanho : ");
        fflush(stdin);
        scanf("%c",&corDosOlhos);
        corDosOlhos=toupper(corDosOlhos);
        //
        printf("\n digite a cor do cabelo [P]preto [R]ruivo [C]castanho [L]loiro : ");
        fflush(stdin);
        scanf("%c",&corDoCabelo);
        corDoCabelo=toupper(corDoCabelo);
        //contador de idade>50 peso<60   pergunta (A)

        printf("\n\n================================================================\n");
        if(idade>50 && peso<60){
            idadeMaior++;
        }
        // (B)
        if(altura<1,50){
            contM++;
            MediaIdade=MediaIdade+idade;
        }
        //     (C)
        if(corDosOlhos == 'A'){
            contadorOlhosAzuis++;
        }
        //  (D)
        if(corDoCabelo == 'R' && corDosOlhos != 'A'){
            ruivoSemOlho++;
        }
        printf("\nque continuar: ");
        fflush(stdin);
        scanf("%c" ,&contador);
        contador=toupper(contador);
    }while(contador != 'N');



///processamento && saida;
    printf("================================================================\n");
    //(A)  quantidade de pessoas qu tem idade superior a 50 anos e peso inferior a 60 kg
    printf("\n quantidade de pessoas >50 anos && peso <60kg: [%02f]",idadeMaior);
    //(B)
    MediaIdade=MediaIdade/contM;
    printf("\n media de idades das pessoas com altura <1.50: [%0.2f]",MediaIdade);
    //(C)
    contadorPessoas=contadorPessoas/contadorOlhosAzuis;
    //(D)
    printf("\n quantidade de pessoas ruivas sem olhos azuis: [%0.2f] \n",ruivoSemOlho);
    printf("================================================================");

return 0;
}


