#include <stdio.h>

int main(){

  float salario;
  int tempoDeTrabalho;

  printf("**********************BONUS SALARIAL**********************\n\n");
  printf("\nInformar salario:\n");
  scanf("%f", &salario);

  printf("\nInformar Tempo de Trabalho: \n");
  scanf("%d", &tempoDeTrabalho);

  // regra de negocios-----------------
  float vintePorcento = (salario * 0.2);
  float dezPorcento = (salario * 0.1);

  if (tempoDeTrabalho >= 5){
    printf("\nSeu bonus sera de R$ %.2f !\n", vintePorcento);
  }else{
    printf("\nSeu bonus sera de R$ %.2f !\n", dezPorcento);
  }
  //------------------------------------
  printf("\n************************************************\n");

}

// A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os funcionários
// com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais.
// Faça um um programa em C que receba o salário e o tempo de serviço de um
// funcionário, calcule e mostre o valor do bônus recebido por ele.