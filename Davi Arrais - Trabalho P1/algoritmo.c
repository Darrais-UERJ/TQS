//Autor: Davi Arrais Bernardo

#include <stdio.h>

int main(){
    int idade, qtdBilhetes;
    float valor;
    
    //Entrada de Dados
    
    printf("Insira a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Insira a quantidade de bilhetes (máximo de 5 por pessoa): ");
    scanf("%d", &qtdBilhetes);

    // Cálculo
    if (idade <= 12 && idade > 0 && (qtdBilhetes <= 5 && qtdBilhetes > 0)){
        valor = 20 * qtdBilhetes;
        printf("Valor total de: R$%.2f", valor);
    } else if (idade >= 13 && idade < 60 && (qtdBilhetes <= 5 && qtdBilhetes > 0)){
        valor = 30 * qtdBilhetes;
        printf("Valor total de: R$%.2f", valor);
    } else if (idade >= 61 && idade < 130 && (qtdBilhetes <= 5 && qtdBilhetes > 0)){
        valor = 15 * qtdBilhetes;
        printf("Valor total de: R$%.2f", valor);
    }
    else {
        printf("Idade ou Quantidade de bilhetes inválida. Favor tentar novamente.");
    }
    return 0;
}