#include <stdio.h>

int main(){

  char *array[] = {"null","null", "null", "Triangulo",
  "Quadrado","Pentagono",
  "Hexagono", "Heptagono", "Octagono",
  "Eneagono", "Decagono", "Undecagono",
  "Dodecagono" }; 
  int forma;
  printf("Digite o numero de arestas da forma geometrica que voce deseja saber o nome: \n");
  scanf("%d", &forma);

  if(forma <= 2){
    printf("Forma geometrica nao identificada\n");
  } else if(forma > 12){
    printf("Forma geometrica nao identificada o numero foi maior que 12\n");
  } else{
    printf("\nUm \"%s\" tem %d lados!\n\n", array[forma], forma);
  }
}