// 4) Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual é dado por um número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário
// deve digitar o número 0,15.

#include <stdio.h>

int main() {
    float salario, percentualReajuste, salarioReajustado;
    printf("Digite o seu salario atual: ");
    scanf("%f", &salario); // Lê o salário atual do usuário
    printf("Digite o percentual de reajuste (por exemplo, 0.15 para 15%%): ");
    scanf("%f", &percentualReajuste); // Lê o percentual de reajuste
    salarioReajustado = salario * (1 + percentualReajuste); // Calcula o salário reajustado
    printf("O salario reajustado e: R$%.2f\n", salarioReajustado); // Exibe o salário reajustado formatado com duas casas decimais
    return 0; // Fim do programa 
}