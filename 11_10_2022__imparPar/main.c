#include <stdio.h>
#include <stdio.h>

int main() {

  int n[4],i;
    printf("\ndigite 3 numeros:\n");
  for(i = 0 ;i<2; i++) {
    scanf("%d\n",&n[i]);
  }
  for(i=0; i<3; i++) {
    if(n[i] > 99 || n[i] < 0) {
      printf("ERRO\n");
    } else if(n[i]%2 == 0) {
      printf("PAR\n");
    } else {
      printf("IMPAR\n");
    }
  }

  return 0;
}
