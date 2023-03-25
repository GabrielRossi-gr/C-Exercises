#include <stdio.h>
#include <stdlib.h>

//arquivos .txt
int main(){
    FILE *arq;
    int n;
    char a[30];

                          //escreva write  
    arq = fopen("teste.txt","w+");
    if(!arq){
        printf("\n Erro de abertura");
        exit(EXIT_FAILURE);
    }else{
        printf("\nTudo certo\n");
        for(n=0; n<3; n++){
            printf("entre com %da palavra que quer gravar:\n",n);
            //fquets(a,30,stdin);
            scanf("%s",a);

            //gravar no arquivo
            fprintf(arq,"%s\n",a);
        }
    }
    fclose(arq);
    return 0;

}