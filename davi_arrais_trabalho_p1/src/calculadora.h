int calculo(int idade, int qtdBilhetes){
    // Caso inválido (Idade menor que 0 OU maior que 130)
    if(idade < 0 || idade > 130){
        return -1;
    }
    // Caso inválido (Qtd de Bilhetes menor que 0 OU maior que 5)
    if(qtdBilhetes < 1 || qtdBilhetes > 5){
        return -1;
    }
    // Caso válido (idade maior que 0 E menor ou igual a 12)
    if(idade > 0 && idade <= 12){
        return 20 * qtdBilhetes;
    }
    // Caso válido (idade maior que 12 E menor ou igual a 59)
    if (idade > 12 && idade <= 59){
        return 30 * qtdBilhetes;
    }
    // Caso válido (idade maior que 59 E menor ou igual a 130)
    if (idade > 59 && idade <= 130){
        return 15 *qtdBilhetes;
    }
}