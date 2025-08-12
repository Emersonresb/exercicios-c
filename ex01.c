// 1) Dado um número real qualquer, informe qual é seu dobro.

#include <stdio.h> 

int main() {

float numero, dobro;

printf("Digite um numero real, seja ele qual for:");
scanf("%f", &numero); // Lê o número real do usuário
dobro=numero*2; // Calcula o dobro do número
printf("O dobro de %.2f = %.2f\n", numero, dobro); // Exibe o resultado formatado com duas casas decimais
return 0; // Fim do programa

}
