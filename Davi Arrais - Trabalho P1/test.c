//Autor: Davi Arrais Bernardo

//Chamada das bibliotecas
#include "./teste/minunit-master/minunit.h"
#include "./src/calculadora.h" 

// Casos de Teste - Cálculos normais

// Teste 1: Verifica se o valor é calculado corretamente para daixa de menores de idade (menor de até 12 anos)
MU_TEST(teste_calculo_menor) {
    int valor = calculo(10, 5);
    mu_assert_int_eq(100, valor);
   }
// Teste 2: Verifica se o valor é calculado corretamente para faixa de adultos (de 13 a 59 anos de idade)
MU_TEST(teste_calculo_adulto) {
    int valor = calculo(30, 5);
    mu_assert_int_eq(150, valor);
}
// Teste 3: Verifica se o valor é calculado corretamente para faixa de idosos (de 60 a 130 anos de idade)
MU_TEST(teste_calculo_idoso) {
    int valor = calculo(75, 5);
    mu_assert_int_eq(75, valor);
}

// Casos de Teste Valor Limite - Inválidos

// Teste 4: Verifica se o Caso de Teste Inválido - Valor Limite está funcionando para idades negativas 
MU_TEST(teste_idade_invalida) {
    int valor = calculo(0, 5);
    mu_assert_int_eq(-1, valor);
}
// Teste 5: Verifica se o Caso de Teste Inválido - Valor Limite está funcionando para idades maiores que 130 
MU_TEST(teste_idade_excedente) {
    int valor = calculo(131, 5);
    mu_assert_int_eq(-1, valor);
} 
// Teste 6: Verifica se o Caso de Teste Inválido - Valor Limite está funcionando para quantidade de bilhetes menores que 1 
MU_TEST(teste_bilhete_insuficiente) {
    int valor = calculo(15, 0);
    mu_assert_int_eq(-1, valor);
}
// Teste 7: Verifica se o Caso de Teste Inválido - Valor Limite está funcionando para quantidade de bilhetes maiores que 5 
MU_TEST(teste_bilhete_excedente) {
    int valor = calculo(15, 6);
    mu_assert_int_eq(-1, valor);
}

// Casos de Teste Valor Limite - Válidos

// Teste 8: Verifica se o Caso de Teste Válido - Valor Limite está funcionando para idades positivas 
MU_TEST(teste_idade_limite_min) {
    int valor = calculo(1, 5);
    mu_assert_int_eq(100, valor);
}
// Teste 9: Verifica se o Caso de Teste Válido - Valor Limite está funcionando para idades menores 131 
MU_TEST(teste_idade_limite_max) {
    int valor = calculo(130, 5);
    mu_assert_int_eq(75, valor);
} 
// Teste 10: Verifica se o Caso de Teste Válido - Valor Limite está funcionando para quantidade de bilhetes maiores que 0 
MU_TEST(teste_bilhete_limite_min) {
    int valor = calculo(15, 1);
    mu_assert_int_eq(30, valor);
}
// Teste 11: Verifica se o Caso de Teste Válido - Valor Limite está funcionando para quantidade de bilhetes menores que 6 
MU_TEST(teste_bilhete_limite_max) {
    int valor = calculo(15, 5);
    mu_assert_int_eq(150, valor);
}
MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(teste_calculo_menor);
    MU_RUN_TEST(teste_calculo_adulto);
    MU_RUN_TEST(teste_calculo_idoso);
	MU_RUN_TEST(teste_idade_invalida);   
	MU_RUN_TEST(teste_idade_excedente);   
	MU_RUN_TEST(teste_bilhete_insuficiente);   
	MU_RUN_TEST(teste_bilhete_excedente);   
	MU_RUN_TEST(teste_idade_limite_min);   
	MU_RUN_TEST(teste_idade_limite_max);   
	MU_RUN_TEST(teste_bilhete_limite_min);   
	MU_RUN_TEST(teste_bilhete_limite_max);  
}
int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}