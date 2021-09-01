#include<stdio.h>


int main (){
    
    int idade;
    
    printf ("Informe a idade do Nadador\n");
    scanf("%d", &idade);

    if(idade < 4){
        printf("Fora da faixa etaria permitida");
    }
    
    else if ((idade>=5) && (idade<=7)){
    printf("Nadador faz parte da categoria Infantil A");
    }

    else if ((idade>=8) && (idade<=11)){
    printf("Nadador faz parte da categoria Infantil B");
    }
    
    else if ((idade>=12) && (idade<=13)){
    printf("Nadador faz parte da categoria Juvenil A");
    }
    
    else if ((idade>=14) && (idade<=17)){
    printf("Nadador faz parte da categoria Juvenil B");
    }
    
    else{
    printf("Nadador faz parte da categoria Adulto");
    }
    }