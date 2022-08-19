#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3 departamentos cada um tem n funcionarios
        int x ,salario, departamento  ;
    //laço
        char repetir;
    ///quantidade de funcionarios
        int quantfuncionario;
    ///total de todos os salarios
        int totalsalario;
    ///total de salario por departamento
        int dep1,dep2,dep3;
    ///maior salario por departamento
        int MAIORsalariodep,DEPmaior;
        //////////////////////////maiordep1=maiordep2=maiordep3=0
    //zerando var
        dep1=dep2=dep3=departamento=totalsalario=quantfuncionario=x=0;
    while(x != 3){
        departamento++;
        do{
            printf("\n departamento %d \n", departamento);
            //fflush(stdin);
            //repetir = 'n';
            //fflush(stdin);
            //salario
            printf("digite o salario da criatura: ");
            scanf("%d",&salario);
            ///total de salario por departamento
            if(departamento == 1){
                dep1=dep1+salario;
                if(salario>MAIORsalariodep){
                    MAIORsalariodep=salario;
                    DEPmaior=departamento;
                }
            }else if(departamento == 2){
                dep2=dep2+salario;
                if(salario>MAIORsalariodep){
                    MAIORsalariodep=salario;
                    DEPmaior=departamento;
                }
                }else{
                    dep3=dep3+salario;
                    if(salario>MAIORsalariodep){
                        MAIORsalariodep=salario;
                        DEPmaior=departamento;
                    }
                }
            //TOTAL DE SALARIO
            totalsalario=totalsalario+salario;
            //quantidade de funcionarios TOTAL
            quantfuncionario++;
            //repetir
            printf("\n adicionar MAIS funcionarios |S ou N|");
            fflush(stdin);
            scanf("%c",&repetir);
            fflush(stdin);
        }while(repetir != 'n');
    x++;
    };
printf("\n#############################################\n quantdade de pessoas : %d",quantfuncionario);
printf("\n total de TODOS os salarios : %d", totalsalario);
printf("\n total de salarios por departamento --> \n departamento1: %d  \n departamento2: %d  \n departamento3: %d ",dep1,dep2,dep3);
printf("\n#############################################\n maior salario por departamento -->\n departamento: %d\n maior salario: %d \n \n",DEPmaior,MAIORsalariodep);
    return 0;
}
