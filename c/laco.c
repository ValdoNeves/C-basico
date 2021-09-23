#include <stdio.h>

int main(){

  int numero;
  int cont = 0;
  int resultado = 0;
  float somatoria = 0.0;

  printf("Digite um numero inteiro: \n");
  scanf("%d", &numero);

  int menor = numero;
  int maior = 0;
  float media = 0;
  float mediaTotal = 0;

  while (numero > 0){
    if(menor > numero ){
      menor = numero;
    }
    if(maior < numero){
      maior = numero;
    }
    cont++; 
    somatoria = somatoria + numero;
    printf("Insira mais um numero inteiro: \n");
    scanf("%d", &numero);
  }

  mediaTotal = somatoria / cont;
  media = (maior + menor) / 2.0; 

  printf("\n--------------------------------------------\n");

  printf("\nForam digitados no total %d\n numeros inteiros antes de finalizar o laco\n", cont);
  // printf("\n%.2f somatoria media\n", somatoria);
  printf("\nMenor valor digitado %d, \n", menor);
  printf("\nMaior valor digitado %d,\n", maior);
  printf("\nMedia entre maior e menor: %.2f\n", media);
  printf("\nMedia total: %.2f\n", mediaTotal);
  
  printf("\nFim\n");
  printf("\n--------------------------------------------\n");

}