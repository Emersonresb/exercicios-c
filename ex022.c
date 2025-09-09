/*Considere o valor de consumo médio diário de energia de uma casa em 2,5 kWh. Faça um
código em C que peça o valor em R$ do Kwh e imprima o valor a ser pago no mês (30 dias).*/

#include <stdio.h>
int main() {

float consumo_medio = 2.5, valor, total;

printf("Digite o valor em R$ do Kwh: \n");
scanf("%f", &valor);

total = (valor * consumo_medio) * 30;

printf("O valor total a ser pago apos 30 dias é: R$%.2f\n", total);

    return 0;
}