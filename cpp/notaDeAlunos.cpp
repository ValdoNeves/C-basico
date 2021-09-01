#include<stdio.h>


int main (){
    
    // indicando variaveis, variaveis do tipo float, com ela podemos pegar valores quebrados
    // levando em conta que utilizamos o padrao americano ou seja o ponto no lugar da virgula
    float p1;
    float p2;
    float p3;
    int faltas;
    // opcional
    int porcentagemDeFaltas;

    //pegando os valores das provas e atribuindo as variaveis
    printf ("Informe a nota referente a P1\n");
    scanf("%f", &p1);
    printf("Informar a nota referente a P2\n");
    scanf("%f", &p2);

    //coletando o numero de faltas, caso ultrapasse 30% aluno reprovado
    printf("Informar a quantidade de faltas\n");
    scanf("%d", &faltas);

    //porcentagem referente as faltas opcional
    porcentagemDeFaltas = (100*faltas)/20;

    printf("P1: %.2f\nP2: %.2f\nFaltas: %d\n",p1, p2,faltas);

    //logica sobre faltas
    if(faltas > ((20*30)/100)){
        printf("Aluno Reprovado com %d%% de faltas",porcentagemDeFaltas);
        return 0; //finaliza a logica
    }

    //media entre p1 e p2
    if(((p1+p2)/2) >= 6){
        printf("Parabens aluno aprovado!");
        return 0;
    }else{
        printf("Informar a nota da P3\n");
        scanf("%f", &p3);
        
        //media entre p1, p2 e p3
        if(((p1+p2+p3)/3) >= 6){
            printf("Aluno aprovado no exame");
        }else{
            printf("Aluno reprovado por nota");
        }
    }
}