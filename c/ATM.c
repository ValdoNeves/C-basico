#include <stdio.h>

int main(){

  float saldo, saque, deposito, saldoAtual;

  int menu;

  printf("Informe o saldo: \n");
  scanf("%f", &saldo);

  printf("Escolha uma operação : \n1 - Saldo\n2 - Saque\n3 - Deposito\n");
  scanf("%d", &menu);

  if(menu == 1){
    //Saldo
    printf("\nSaldo: R$%.2f\n", saldo);
  }
  else if(menu == 2){
    //Saque
    printf("\nDigite o valor a ser Sacado: ");
    scanf("%f", &saque);
    if(saque <= saldo && saque >= 0){//o valor tem que ser menor ou igual ao saldo, e tambem tem que ser um valor positivo
      saldoAtual = saldo - saque;
      printf("\n\nSaldo Anterior: R$%.2f \nSaque: R$%.2f \nSaldo Atual: R$%.2f \n",saldo, saque, saldoAtual );
    }else{
      printf("\nSaldo Insuficiente\n");
    }
  }
  else if(menu == 3){
    //Deposito
    printf("\nDigite o valor a ser Depositado: ");
    scanf("%f", &deposito);
    saldoAtual = saldo + deposito;
    printf("\nSaldo Anterior: R$%.2f \nDeposito: R$%.2f \nSaldo Atual: R$%.2f \n", saldo, deposito, saldoAtual);
  }
  else{
    printf("Digite um valor valido!\n");
  }


}