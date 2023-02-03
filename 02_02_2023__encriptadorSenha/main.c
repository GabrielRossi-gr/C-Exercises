#include <stdio.h>
#include <stdlib.h>


main(){

    ///*
    char senha[30];
    for(int x=0 ; x<30 ; x++){
        senha[x] ="";
    }
    printf("\n|___________________________________________________________________________|\n|\t\t\t\t\t\t\t\t\t    |");
    printf("\n|\t\t\t(criptografo de senhas)                             |");
    printf("\n|___________________________________________________________________________|");
    printf("\n|(caracteres aceitos)                                                       |\n| ^^^^^^^^^^^^^^^^^^   !, aspas, charp, $, porcentagem, &, ', (, ), *, +,   |\n| virgula, -, ., /, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, :, ;, <, =, >, ?, @, A,   |\n| B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y,   |\n| Z, [, barra, ], ^, _, `, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p,  |\n| q, r, s, t, u, v, w, x, y, z, {, |, }, ~,                                 |");
    
    printf("\n|___________________________________________________________________________|");
    printf("\n\n(maximo 29 caracteres)");
    printf("\n digite a sua senha: ");

    fflush(stdin);
    fgets(senha,30,stdin);
    fflush(stdin);
    system("cls");
    printf("\nsenha--> %s",senha);


    for(int x = 0 ; x<30 ; x++){
        int h=senha[x];
        printf("|%d",h);
    }
 //*/



/*
    for( int x=0 ; x<20 ; x++){
        if(senha[x] == '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9'){
            printf("\n>>>%c",senha[x]);
        }
    }
*/

    



/*
//caracteres-->
for(int numeros= 33; numeros<=126; numeros++){
    printf("%c, " ,numeros);
}
*/




}