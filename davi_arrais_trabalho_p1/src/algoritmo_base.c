//Autor: Davi Arrais Bernardo

#include <stdio.h>
#include "calculadora.h"

int main(){
    int idade, qtdBilhetes;
    float valor;
    
    //Entrada de Dados
    
    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Insira a quantidade de bilhetes (máximo de 5 por pessoa): ");
    scanf("%d", &qtdBilhetes);

    // Cálculo
    valor = calculo (idade, qtdBilhetes);
    if(valor == -1){
        printf("Idade ou Quantidade de bilhetes inválida. Favor tentar novamente.");
    } else {
        printf("Valor total dos bilhetes: %.2f", valor);
    }
    return 0;
}