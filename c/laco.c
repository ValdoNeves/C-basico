#include <stdio.h>

int main(){

  int numero;
  int cont = 0;
  int resultado = 0;
  int somatoria = 0;

  printf("Digite um numero inteiro: \n");
  scanf("%d", &numero);
  int menor = numero;
  int maior = 0;
  float media = 0;
  while (numero > 0){
    if(menor > numero ){
      menor = numero;
    }
    if(maior < numero){
      maior = numero;
    }
    if(media == 0){
      media = numero;
      
    }else{
      resultado = somatoria / cont;

    }
    cont++; 
    somatoria = somatoria + numero;
    printf("Insira mais um numero inteiro: \n");
    scanf("%d", &numero);
    

  }

  printf("\n%d contador\n", cont);
  printf("\n%d somatoria media\n", somatoria);
  printf("\n%d é o menor valor\n", menor);
  printf("\n%d é o maior valor\n", maior);
  printf("\n%.2f é o media valor\n", media);

  printf("\nFim\n");
}