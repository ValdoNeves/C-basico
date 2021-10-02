#include <stdio.h>

int main(){
  
  float salarioBruto, salarioLiquido, IR, INSS, taxaInss;
  taxaInss = 0.11;
  printf("Insira o valor do salario bruto\n");
  scanf("%f", &salarioBruto);

  if(salarioBruto > 0){
    INSS = salarioBruto * taxaInss;
    if(salarioBruto > 0 && salarioBruto <= 1020){
      IR = 0;
    }else if(salarioBruto >= 1020.01 && salarioBruto <= 2500){
      IR = salarioBruto * 0.07;
    }else if(salarioBruto >= 2500.01 && salarioBruto <= 3800){
      IR = salarioBruto * 0.15;
    }else {
      IR = salarioBruto * 0.275;
    }
    salarioLiquido = (salarioBruto - INSS) - IR;
    printf("R$%.2f\n",salarioLiquido);
  }else{
    printf("Salario inexistente!\n");
  }
}