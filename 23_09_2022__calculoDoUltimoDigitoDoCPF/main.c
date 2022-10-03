#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cpf[9];
    int CPF[9],x,j,soma,conta,p,resto;
    int dac1,dac2;

    dac1=dac2=0;
    x=j=conta=p=soma=resto=p=0;
    j=10;


    //PEGAR CPF;
    fflush(stdin);
    gets(cpf);

    for(x=0; x<9; x++){
        CPF[x]=cpf[x]-'0';
    }
    for(x=0; x<9; x++){
            printf("%d",CPF[x]);
    }

    //CALCULAR DAC1
    for(x=0; x<9; x++){
        p=CPF[x]*j;
        soma=soma+p;
        j--;
    }
    resto=soma%11;
    conta=11-resto;
    if(conta>9){
        dac1=0;
    }else{
        dac1=conta;
    }

    j=11;
    conta=soma=p=soma=resto=0;

    // calcular DAC2
    dac2=0;
        for(x=0;x<9;x++){
            p=CPF[x]*j;
            soma=soma+p;
            j--;
        }
            soma=soma+(dac1*2);
            resto=soma%11;
            conta=11-resto;
            if(conta>9){
                dac2=0;
            }else{

                dac2=conta;
            }

            printf("\n o segundo digito e[%d]",dac1);
            printf("\n o segundo digito e [%d]" ,dac2);
return 0;
}






