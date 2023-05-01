#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    char frase;
    //fgets(frase,30,stdin);
    //printf("%s",frase);
    scanf("%c",&frase);
    char frase2 = toupper(frase);
    printf("%c",frase2);

return 0;
}

