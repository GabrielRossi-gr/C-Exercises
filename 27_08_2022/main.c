#include <stdio.h>
#include <stdlib.h>

int main()
{
float preco,contador,valorAdicional,imposto;
char tipo,refrigeracao,validadorTipo,validadorR,rep;
preco=contador=valorAdicional=imposto=0;

    do{

        printf("\n digite o preco: ");
        scanf("%f",&preco);
        fflush(stdin);

        printf("\n digite o tipo: ");
        scanf("%c",&tipo);
        fflush(stdin);
            validadorTipo=tolower(tipo);
            fflush(stdin);

        printf("\n precisa de refrigeracao: ");
        scanf("%c",&refrigeracao);
        fflush(stdin);
            validadorR=tolower(refrigeracao);
            fflush(stdin);
        ///calcular valor adicional e preco "novo";
        if(validadorTipo=='a' && preco<15.00){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                preco=preco+(preco*0.08);
            }
        //refrigeracao
            if(validadorR=='s'){
                    //2+8
                preco=preco+10;
                valorAdicional=10;
            }

            else{
                preco=preco+2.00;
                valorAdicional=2.00;
            }
        }

        if(validadorTipo=='a' && preco>=15.00){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                preco=preco+(preco*0.08);
            }
        //refrigeracao
            if(validadorR=='s'){
                    //5+8=13
                preco=preco+13;
                valorAdicional=13;
            }
            else{
                preco=preco+5.00;
                valorAdicional=5.00;
            }
        }

        if(validadorTipo=='l' && preco<10.00){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                imposto=preco*0.05;
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                imposto=preco*0.08;
                preco=preco+(preco*0.08);
            }

            preco=preco+1.50;
            valorAdicional=1.50;
        }

        if(validadorTipo=='l' && preco>= 10.00){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                imposto=preco*0.05;
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                imposto=preco*0.08;
                preco=preco+(preco*0.08);
            }

            preco=preco+2.50;
            valorAdicional=2.50;
        }

        if(validadorTipo=='v' && preco<30.00){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                imposto=preco*0.05;
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                imposto=preco*0.08;
                preco=preco+(preco*0.08);
            }
        //refrigeracao
            if(validadorR=='s'){
                    //3+2
                preco=preco+5.0;
                valorAdicional=5.0;
            }
            else{
                preco=preco+3.0;
                valorAdicional=3.0;
            }
        }
        if(validadorTipo=='v' && preco>=30.0){
        //imposto
        if(tipo!='a' || refrigeracao!='s'){
            preco=preco-(preco*0.03);
        }

            if(preco<25){
                imposto=preco*0.05;
                preco=preco+(preco*0.05);
            }
            else if(preco>=25){
                imposto=preco*0.08;
                preco=preco+(preco*0.08);
            }
        //refrigeracao
            if(validadorR=='s' ){
                    //2.50+2
                preco=preco+4.50;
                valorAdicional=4.50;
            }
            else{
                preco+preco+2.50;
                valorAdicional=2.50;
            }
        }
        printf("\npreco modificado: %0.2f",preco);
        printf("\nvalor doaumento: %0.2f",valorAdicional);
        printf("\nvalor do imposto: %0.2f",imposto);


        printf("\n\n repetir:");
        scanf("%c",&rep);
        fflush(stdin);
    }while(rep!='n');
return 0;
}
