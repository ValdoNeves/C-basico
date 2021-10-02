#include <stdio.h>

int main(){

  float valorDaCompra, resultado;
  printf("Insira o valor da venda\n");
  scanf("%f", &valorDaCompra);

  if(valorDaCompra <= 0){
    printf("Valor Inexistente\n");
  }else if(valorDaCompra <= 100){
    printf("Comissão de 1%% baseada na venda de R$%.2f\n",valorDaCompra);
    resultado = (valorDaCompra * 0.01); 
    printf("Valor da comissão: R$%.2f \n", resultado);
  } else if(valorDaCompra <= 200){
    printf("Comissão de 2%% baseada na venda de R$%.2f\n",valorDaCompra);
    resultado = (valorDaCompra * 0.02); 
    printf("Valor da comissão: R$%.2f \n", resultado);
  }else if(valorDaCompra <= 300){
    printf("Comissão de 3%% baseada na venda de R$%.2f\n",valorDaCompra);
    resultado = (valorDaCompra * 0.03); 
    printf("Valor da comissão: R$%.2f \n", resultado);
  }else if(valorDaCompra <= 400){
    printf("Comissão de 4%% baseada na venda de R$%.2f\n",valorDaCompra);
    resultado = (valorDaCompra * 0.04); 
    printf("Valor da comissão: R$%.2f \n", resultado);
  }else {
    printf("Comissão de 5%% baseada na venda de R$%.2f\n",valorDaCompra);
    resultado = (valorDaCompra * 0.05); 
    printf("Valor da comissão: R$%.2f \n", resultado);
  }
}