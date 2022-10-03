#include <stdio.h>
#include <stdlib.h>

int main(){
    float horasTrabalhadas, salarioHora, salarioBruto, descontoINSS, descontoIRRF, salarioFinal;
    char rep;
    horasTrabalhadas=salarioHora=salarioBruto=0;

    do{
        printf("\n digite as horas trabalhadas: ");
        scanf("%f",&horasTrabalhadas);

        printf("\n digite seu salario por hora : ");
        scanf("%f",&salarioHora);

    //horas trabalhadas
        printf("\n horas trabalhadas: [%0.2f]",horasTrabalhadas);

    //salario hora
        printf("\n horas trabalhadas: [%0.2f]",salarioHora);

    //salario bruto
        salarioBruto=horasTrabalhadas*salarioHora;
        printf("\n salario bruto: [%0.2f]" ,salarioBruto);

    //descontos INSS  entrada:salarioBruto   saida:descontoINSS
        if(salarioBruto>0 && salarioBruto<=1212){
            descontoINSS=salarioBruto-90.9;
        }else if(salarioBruto>1212 && salarioBruto<=2427){
            descontoINSS=salarioBruto-218.46;
        }else if(salarioBruto>2427 && salarioBruto<=3641){
            descontoINSS=salarioBruto-436.92;
        }else if(salarioBruto>3641){
            descontoINSS=salarioBruto-992.18;
        }else{
        printf("\n##############################\nalguma informacao foi digitada errada o programa pode nao funcionar corretamente\n");
        }
        printf("\n desconto INSS [%0.2f]",descontoINSS);

    //imposto de renda
        if(salarioBruto>0 && salarioBruto<=1903){
            descontoIRRF=0;
        }else if(salarioBruto>1903 && salarioBruto<=2826){
            descontoIRRF=(salarioBruto*0.75)+142;
        }else if(salarioBruto>2826 && salarioBruto<=3751){
            descontoIRRF=(salarioBruto*0.15)+354;
        }else if(salarioBruto>3751 && salarioBruto<=4664){
            descontoIRRF=(salarioBruto*0.22)+636;
        }else if(salarioBruto>4664){
            descontoIRRF=(salarioBruto*0.27)+800;
        }
        printf("\n imposto de renda: [%0.2f]",descontoIRRF);

        //salario final
        salarioFinal=salarioBruto-(descontoINSS+descontoIRRF);
        if(salarioFinal<0){
            salarioFinal*-1;
        }
        printf("\n salario apos os empostos >:(   [%0.2f]",salarioFinal);



        printf("\n\n##################################################3\n quer continuar: ");
        fflush(stdin);
        scanf("%c",&rep);
    }while(rep != 'n');

return 0;
}
