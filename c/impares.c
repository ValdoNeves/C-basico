#include <stdio.h>

int main(){

  int inicio = 100;
  int fim = 200;
  int i;

  printf("A baixo estao os numero impares entre %d e %d: \n", inicio, fim);
  printf("\n\nNumeros: ");

  for(i = inicio; i <= fim; i++){
    if(i % 2 != 0){
      printf("%d, ", i);
    }
  }
  printf("!\n\nFIM!!!\n");
}

