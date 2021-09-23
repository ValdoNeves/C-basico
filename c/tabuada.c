#include <stdio.h>

int main(){

  int numero;
  int i;

  printf("Insira o numero correspondente a tabuada que voce deseja visualizar: \n");
  scanf("%d", &numero);

  printf("\n\nTabuada do %d\n\n", numero);
  for(i = 1; i < 11; i++){
    int resultado = i * numero;
    printf("%d x %d = %d\n", numero, i, resultado);
  }

  printf("\n\nFIM\n");

}