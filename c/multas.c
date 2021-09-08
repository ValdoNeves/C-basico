#include <stdio.h>

int main(){

  int velocidadeMaxima;
  float velocidadeAtual;

  printf("Digite a velocidade Maxima da avenida!\n");
  scanf("%d",&velocidadeMaxima);

  printf("\nDigite a qual velocidade o veiculo: \n");
  scanf("%f",&velocidadeAtual);

  float velocidadeMedia = velocidadeAtual - velocidadeMaxima;

  if(velocidadeMedia <= 0){
    printf("Velocidade Ok!");
  }
  else if(velocidadeMedia <= 10){
    printf("\nvelocidade ate 10km/h acima do permitido\n");
    printf("Multa de R$ 50,00");
  }
  else if(velocidadeMedia <=11 || velocidadeMedia <=30){
    printf("\nEntre 11 e 30km/h acima do permitido\n");
    printf("Multa de R$ 100,00");
  }
  else{
    printf("\nveiculo acima de 31km/h do permitido\n");
    printf("Multa de R$ 200,00");
  }
}