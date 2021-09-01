#include<stdio.h>


int main (){
    
    float indice;

    printf("Secretaria do Meio Ambiente\n\n");
    printf("Indice de poluicao aceitavel 0,05 a 0,25\n\n");

    printf("Indique qual o indice medido\n");
    scanf("%f", &indice);

    if((indice >= 0.26) && (indice <= 0.29)){
        printf("indice em : %.2f! Nao especificado no enunciado", indice);
        return 0;
    }
    if((indice >= 0.3) && (indice <= 0.39)){
        printf("indice em : %.2f! Alerda enviado para as empresas do Grupo 1", indice);
        return 0;
    }
    else if((indice >= 0.4) && (indice < 0.5)){
        printf("indice em : %.2f! Alerda enviado para as empresas dos Grupos 1 e 2", indice);
        return 0;
    }
    else if((indice >= 0.5)){
        printf("indice em : %.2f! Alerda enviado para todas as empresas de todos os grupos (1, 2 e 3)", indice);
        return 0;
    }
    else{
        printf("Indice em %.2f dentro do aceitavel", indice);
    }
}