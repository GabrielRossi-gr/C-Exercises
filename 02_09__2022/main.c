#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rep; //repetiçao do-while
    int f,m,salario,prontuario,pecas,contpecas,totalSalario,ntotalpecas,mediaf,media,nmaior,maiorsalario;
    char sexo;

    f=m=salario=prontuario=pecas=contpecas=totalSalario=ntotalpecas=mediaf=media=nmaior=maiorsalario=0;

    do{

            //entrada de dados
        printf("\n digite o numero do prontuario: ");
            scanf("%d",&prontuario);
        printf("\n digite o numero de pecas fabricadas no mes: ");
            scanf("%d",&pecas);
        //total de pecas
            ntotalpecas=pecas;
        printf("\n digite o sexo do operario: ");
            fflush(stdin);
            scanf("%c",&sexo);
            fflush(stdin);

        printf("\n\n#########################################");

        //contador de homens e mulheres
        if(sexo == 'm'){
            m=m+1;
        }
        if(sexo == 'f'){
            f=f+1;
        }

        //mudar salario
        if(pecas<=30){
            salario=1200;
        }else if(pecas>=31 && pecas<=35){
            contpecas=pecas-30;
            salario=36*contpecas;
            }else if(pecas>35){
                contpecas=pecas-35;
                salario=contpecas*60;
                }else{
                    salario=1200;
                    }
        //maior salario
        if(maiorsalario<salario){
            maiorsalario=salario;
            nmaior=prontuario;
        }

        //media homens mulheres
        media=(float)ntotalpecas/m;
        mediaf=ntotalpecas/f;
        //totsl de todos os salarios
        totalSalario=totalSalario=salario;


        //respostas
        printf("\n___________________________________________________\n");
        printf("\n numero: %d salario reajustado: %d",prontuario,salario);
        printf("\n___________________________________________________\n");


        printf("\n quer continuar: ");
        fflush(stdin);
        scanf("%c",&rep);
    }while(rep != 'n');
        printf("\n\n##############################################\n");
        printf("\n o total de salarios: %d",totalSalario);
        printf("\n numero total de pecas: %d",ntotalpecas);
        printf("\n media de pecas fabricadas por homens: %d",media);
        printf("\n a media de pecas fabricadas por mulheres: %d",mediaf);
        printf("\n numero do maior: %d salario do maior: %d",nmaior,maiorsalario);

        printf("\n\n##############################################\n");

}
