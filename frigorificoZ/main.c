#include <stdio.h>
#include <stdlib.h>

int main()
{

int codigo,cdb,h,x,y,cc1,cc2 ;
float media,bmg,bmm,peso,contadordeboi;
printf("\n ##################################################################### \n");
printf(" bem vindo ao FRIGORIFICO!, vamos gerenciar os seus gados :>\n sera calculado:\n\n * media do peso dos animais \n * o boi mais gordo e o mais magro ");
printf("\n ##################################################################### \n");
contadordeboi=0;
bmg=0;
bmm=999999999;
//contador de bois
cdb=0;
printf("\n digite a quantidade de bois =");
scanf("%d",&cdb);
//frescura
for(y=1 ; y<=70 ; y++){
    printf("#");
}
printf("\n");
for(x=1 ; x<=cdb ; x++){
    printf("\n digite o codigo do boi = ");
    scanf("%d",&codigo);
    printf("\n digite o peso do boi em KG = ");
    scanf("%f",&peso);

    //frescura
    for(y=1 ; y<=50 ; y++){
    printf("-");
}
//boi mais gordo
if(peso>bmg){
    bmg=peso;
    cc1=codigo;
}
//boi mais magro
if(peso<bmm){
    bmm=peso;
    cc2=codigo;

//contador de pesos do boi para media
contadordeboi=(contadordeboi+peso);
}

}
printf("\n");
//frescura
for(y=1 ; y<=17 ; y++){
    printf("-_-");
}
printf("\n");
printf("\n resultado final: \n");
printf("\n ___boi mais gordo = codigo: %d        %0.2f kg ",cc1,bmg);
printf("\n ___boi mais magro = codigo: %d        %0.2f kg \n\n\n",cc2,bmm);


contadordeboi=(contadordeboi+peso);
media=contadordeboi/cdb;
printf("media de peso = %0.2f kg\n\n\n\n\n\n",media);
printf("\n ##################################################################### \n");
scanf("%d",&h);
}
