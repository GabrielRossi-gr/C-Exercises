#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a,b,r,co,repetidor;
char c,c1,c2,c3;
printf("\n        CALCULADORA \n\n");
fflush(stdin);

    printf("iniciar conta? |s| or |n| :");
    fflush(stdin);
    scanf("%c",&c3);
     fflush(stdin);
if(c3 =='s'){
    co=1;
    while(co<=2){

                    printf("\n 'a' soma,\n 'b' Subtração,\n 'c' Divisão,\n 'd' Multiplicação,\n 'e' a^b potenciacao,\n 'f' raiz quadrada \n\n digite a letra :");
                    scanf("\n %c",&c1);
                    fflush(stdin);
                    printf("--------------\n");

            //soma
            if(c1=='a'){
                    printf("\n INTRUCAO: A + B = R \n");

                      printf("\n -------------- \n\n\n\n\n");
                    printf("\n valor 'A'  :");
                    scanf("%d",&a);
                    printf("\n valor 'B'  :");
                    scanf("%d",&b);

                r=a+b;
             printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);
            }
            //subtração
            if(c1=='b'){
                printf("\n INTRUCAO: A - B = R \n");

                  printf("\n -------------- \n\n\n\n\n");
                    printf("\n valor 'A'  :");
                    scanf("%d",&a);
                    printf("\n valor 'B'  :");
                    scanf("%d",&b);
                    r=a-b;
                  printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);

            }
            //divisão
            if(c1=='c'){
                printf("\n INTRUCAO: A / B = R \n");
                    printf("\n -------------- \n\n\n\n\n");

                    printf("\n valor 'A'  :");
                    scanf("%d",&a);
                    printf("\n valor 'B'  :");
                    scanf("%d",&b);
                r=a/b;
                printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);

            }
            //multiplicação
            if(c1=='d'){
                    printf("\n INTRUCAO: A x B = R \n ");

                     printf("\n -------------- \n\n\n\n\n");
                    printf("\n valor 'A'  :");
                    scanf("%d",&a);
                    printf("\n valor 'B' :");
                    scanf("%d",&b);
                r=a*b;
                 printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);

            }
            //potenciação
            if(c1=='e'){
                printf("\n INTRUCAO: A ^B = R \n");

                 printf("\n -------------- \n\n\n\n\n");
                    printf("\n valor 'A'  :");
                    scanf("%d",&a);
                    printf("\n valor 'B' :");
                    scanf("%d",&b);
                r=pow(a,b);
                 printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);
           }
            //raiz quadrada
            if(c1=='f'){
                printf("\n INTRUCAO:  raiz de (A) \n ");

                 printf("\n -------------- \n\n\n\n\n");
                    printf("\n valor 'A'  :");
                    scanf("%d",&a);

                r=sqrt(a);
                printf("\n######################### \n\n resultado :%d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",r);
            }

        fflush(stdin);
        printf("outra conta? |s| or |n| :");
        scanf("%c",&c2);
        fflush(stdin);

        if(c2=='s'){
            co--;
        }
        if(c2=='n'){
            co=co+999;
            printf("-----------");
        }
    }
}
if(c3=='n'){
    printf("\n\n volte sempre! \n\n ");
    }
}
