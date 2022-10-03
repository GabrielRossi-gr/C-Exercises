
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
return exer3();
}

int exer1(){
int x,y,c1,c2,vet[6];
c1=0;
c2=0;

for (x=0 ; x<6 ; x++){
    printf("digite um numero = ");
    scanf("%d", &vet[x]);
}

printf("\n pares :");
for (x=0 ; x<6 ; x++){
    if(vet[x]%2 == 0){
            c1++;
            printf("\n %d",vet[x]);
    }

}
printf("\n impares :");
for(x=0 ; x<6 ; x++){

     if(vet[x]%2 !=0){
            c2++;
            printf("\n %d",vet[x]);
    }
}
printf("\n n de impares = %d ",c2);

printf("\n n de pares = %d ",c1);

printf("\n \n\n ");






}
int exer2(){

int a,b,h,i,n4[7],w[7],z[7],x[7];

///
for(i=0 ; i<=6 ; i++){
    n4[i]=0;
}
for(i=0 ; i<=6 ; i++){
    x[i]=0;
}
for(i=0 ; i<=6 ; i++){
    w[i]=0;
}
///
for(h=0 ; h<=6 ; h++){
    printf("\n digite um numero = ");
    fflush(stdin);
    scanf("%d",&z[h]);

        a=z[h]%2;
        b=z[h]%3;
        if(a == 0 && b == 0){
            n4[h]=z[h];
        }
        a=0;
        a=z[h]%2;
        ///
        if(a == 0){
            x[h]=z[h];
        }
        b=0;
        b=z[h]%3;
        ///
        if(b == 0){
            w[h]=z[h];
        }
}
printf("\n multiplos de 2: ");
for(i=0 ; i<=6 ; i++){
        if(x[i] != 0){
            printf("\n %d",x[i]);
        }
}

printf("\n multiplos de 3: ");
for(i=0 ; i<=6 ; i++){
        if(w[i] != 0){
            printf("\n %d",w[i]);
        }
}
printf("\n multiplos de 2 e 3: ");
for(i=0 ; i<=6 ; i++){
        if(n4[i] != 0){
            printf("\n %d",n4[i]);
        }
}
return 0;
}
int exer3(){

int codproduto[10]={10,9,8,7,6,5,4,3,2,1};
int estoque[10]={23,14,20,23,17,18,8,20,12,10};
int codcliente,x,quantidade,digitarcodproduto,z,contador,y;
do{
    printf("\n codigo cliente: ");
    scanf("%d",&codcliente);
    for(x=0;x<10;x++){
        printf("\n cod produto[%d]  estoque[%d]",codproduto[x],estoque[x]);
    }
    printf("\n");
    printf("\n digite o codigo do produto: ");
    scanf("%d",&digitarcodproduto);
    printf("\n quantidade:");
    scanf("%d",&quantidade);
    y=0;
    z=0;
    for(x=0;x<10;x++){
        if(codproduto[x]==digitarcodproduto){
            y=1;
            if(quantidade<=estoque[x]){
                contador=estoque[x]-quantidade;
                estoque[x]=contador;
            }else{
            printf("\n nao tem estoque");
            }
        }
    }
    if(y==1 && contador>0){
        printf("\n cod cliente:[%d] cod produto:[%d] comprado:[%d] estoque[%d]",codcliente,digitarcodproduto,quantidade,contador);
        printf("\n\n\n\n");
    }
    if(y==0){
        printf("\n codigo inexistente");
    }
}while(codcliente!=0);
printf("\n \n \n \n \n \n volte sempre");

return 0;
}
int exer4(){

int x,y[15],z,vet[15];
z=0;
printf("digite alguns numeros\n ");
for(x=0 ; x<=14; x++){
    scanf("\n %d",&z);
    if(z == 30){
        y[x]=x;
    }
    else{y[x]=0;
    }
}
for(x=0 ; x<=14 ; x++){
    if(y[x] != 0){
            printf("\n : %d",y[x]);
    }

}
return 0;
}
int exer5(){

int x,n1[15], n2[15];

x=0;
while(x<=14){
    printf("digite o numero de matricula de LOGICA DE PROGRAMACAO: ");
    scanf("%d",&n1[x]);
    printf("digite o numero de matricula de LINGUAGEN DE PROGRAMACAO: ");
    scanf("%d",&n2[x]);
x++;
}
x=0;
while(x<=14){
    if(n1[x] == n2[x]){
        printf("\n %d",n1[x]);
    }
x++;
}
return 0;
}
int exer6(){


//float y[10],comicao[10];
int  x,totVenda[10],y[10],comissao[10],vendaGeral,Vmaior,Vmenor,h1,h2;
char nomes[11],n2,n3;
Vmaior=0;
Vmenor=999999;
for(x=0; x<=9 ; x++){
    printf("\ndigite a primeira letra do nome do vendedor: ");
    fflush(stdin);
    scanf("%c",&nomes[x]);
    fflush(stdin);
    printf("\ndigite o total de vendas do vendedor: ");
    scanf("%d",&totVenda[x]);
    vendaGeral=vendaGeral+totVenda[x];
    y[x]=totVenda[x];
    comissao[x]=(y[x]*0.10);

    if(comissao[x]>Vmaior){
        Vmaior=comissao[x];
        n2=nomes[x];
        h1=comissao[x]+totVenda[x];
    }
    if(comissao[x]<Vmenor){
        Vmenor=comissao[x];
        n3=nomes[x];
        h2=comissao[x]+totVenda[x];
    }
}
printf("\n___________________________________\nnomes | total vendido | comissao");

for(x=0; x<=9 ; x++){
        printf("\n %c  ,      %d  ,        %d \n",nomes[x],totVenda[x],comissao[x]);

}
printf("\n______________________________\nvalor total vendido: %d \nvalor maior COMISSAO: %d  nome: %c  TOTAL: %d \nvalor menor COMISSAO: %d  nome: %c  TOTAL: %d \n",vendaGeral,Vmaior,n2,h1,Vmenor,n3,h2);


return 0;
}
int exer7(){


int w,x[10],y,z;
y=0;
z=0;

for(w=0; w<=9; w++){
    printf("digite um numero: ");
    scanf("%d",&x[w]);
    if(x[w]<0){
        y=y+1;
    }
        else if(x[w]>0){
            z=x[w]+z;
            }
            else{
                printf("erro");
            }
}
printf("\n soma dos numeros: %d  quantidade dos numeros negativos: %d \n\n",z,y);


return 0;
}
int exer8(){

int notas[7],x,y,z,a,g,h,reprovados[7];
char nomes[30],maior,nr[10];

for(x=0;x<=6;x++){
    printf("digite um nome: ");
    fflush(stdin);
    scanf("%c",&nomes[x]);
    fflush(stdin);
    printf("digite a media final: ");
    scanf("%d",&y);
    if(y>z){
        z=y;
        maior=nomes[x];
    }
    if(y<7){
        reprovados[x]=y;
    }

}
for(g=0;g<=6;g++){
    for(h=0;h<=10;h++){
        a=(h+reprovados[g]);
        if(a == 14){
            printf("\n nota necessaria: %d      nome: %c",h,nomes[g]);
        }
    }
}
printf("\n\n aluno:%c media maior:%d \n\n" ,maior,z);


return 0;
}
int exer9(){

char nomes[10],n;
int codigos[10],c  ,precos[10],p,x;
for(x=0;x<=9;x++){
    printf("digite o nome: ");
    fflush(stdin);
    scanf("%c",&nomes[x]);
    fflush(stdin);

    printf("digite o codigo: ");
    scanf("%d",&codigos[x]);

    printf("digite o preco: ");
    scanf("%d",&precos[x]);
}
for(x=0;x<=9;x++){
    ///par e preco>1000
    if(codigos[x]%2==0 && precos[x]>1000){
        precos[x]=(precos[x]*0.20)+precos[x];
    ///par
    }if(codigos[x]%2==0 && precos[x]<1000){
        precos[x]=(precos[x]*0.15)+precos[x];
    ///preco >1000
    }if(codigos[x]%2==1 && precos[x]>1000){
        precos[x]=(precos[x]*0.10)+precos[x];
    }
}
for(x=0;x<=9;x++){
        printf("\nnome:%c  codigo:%d  preco:%d",nomes[x],codigos[x],precos[x]);
}
    return 0;
}
int exer10(){


int n1[10],n2[5],x,contador1,contador2,VR1[10],VR2[5],nPar,nTotalV2,y,nImpares[10],k1,k[10];
contador1=0;
contador2=0;
for(x=0;x<=10;x++){
    n1[x]=0;
    n2[x]=0;
}
printf("\n primeiro vetor \n");
for(x=0;x<=9;x++){
    printf("digite o numero: ");
    scanf("%d",&n1[x]);
    contador1=contador1+n1[x];
    if(n1[x]%2 == 1){
        nImpares[x]=n1[x];
    }

}
printf("\n segundo vetor \n");
for(x=0;x<=4;x++){
    printf("digite o numero: ");
    scanf("%d",&n2[x]);
    contador2=contador2+n2[x];
    nTotalV2=nTotalV2+n2[x];
}
///vetor resultante 1
for(y=0;y<=9;y++){
    for(x=0;x<=9;x++){
        if(n1[x]%2==0){
        VR1[y]=n1[x]+nTotalV2;
        //n1[x]=1;
        }
    }
}
printf("\n.........");
///vetor resultante 2
for(y=0;y<=9;y++){
    k1=0;
    for(x=0;x<=4;x++){
        if(nImpares[y]%n2[x] == 0){
            k1++;
        }
    VR2[y]=k1;
    }
}
printf("\n.........");


for(x=0;x<=9;x++){
    printf("\n %d",VR1[x]);
}
for(x=0;x<=9;x++){
    printf("\n %d",VR2[x]);
}

    return 0;
}
