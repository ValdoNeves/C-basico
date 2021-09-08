#include <stdio.h>

int main(){

  int ano;

  printf("informe o ano a ser analisado, com 4 digitos (ex: 2021)\n");
  scanf("%d", &ano);

  if ((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0)){
    printf("%d é um ano bissexto\n", ano);
    return 0;
  } else {
    printf("%d nao é um ano bissexto, o proximo ano bissexto sera 2024\n", ano);
    return 0;
  }
}