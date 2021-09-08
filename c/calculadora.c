#include<stdio.h>


int main (){
    
    //valores que serao utilizados na equacoes
    float valor1;
    float valor2;
    float resultado;

    //tipos de equacoes
    int opcaoEscolhida;


    printf("Insira Dois valores e indique uma operacao a ser realizada entre eles\n\n");
    
    printf("Insira o primeiro valor\n");
    scanf("%f", &valor1);

    printf("\nInsira o segundo valor\n");
    scanf("%f", &valor2);

    printf("\nEscolha uma operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n\n");
    scanf("%d", &opcaoEscolhida);
    
    if(opcaoEscolhida == 1){
        resultado = (valor1 + valor2);
        printf("%.2f + %.2f = %.2f", valor1, valor2,resultado);
        
    }
    if(opcaoEscolhida == 2){
        resultado = (valor1 - valor2);
        printf("%.2f - %.2f = %.2f", valor1, valor2,resultado);
        return 0;
    }
    if(opcaoEscolhida == 3){
        resultado = (valor1 * valor2);
        printf("%.2f x %.2f = %.2f", valor1, valor2,resultado);
        return 0;
        
    }
    if(opcaoEscolhida == 4){
        resultado = (valor1 / valor2);
        printf("%.2f / %.2f = %.2f", valor1, valor2,resultado);
        return 0;
        
    }
    else{
        printf("!!! Digite uma operacao valida !!!");
        
    }

}
