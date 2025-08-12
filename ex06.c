// 6. Dados um valor em real e a cotação do dólar, converta esse valor em dólares. o dolar ta 5.43

#include <stdio.h>

int main() {
    float valorReal, cotacaoDolar, valorDolar;
    printf("Digite o valor em reais que quer converter em dolares: ");
    scanf("%f", &valorReal); // Lê o valor em reais do usuário
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar); // Lê a cotacao do dolar
    valorDolar=valorReal / cotacaoDolar; // Calcula o valor em dolares
    printf("O valor em dolares e: $%.2f\n", valorDolar); // Exibe o valor em dolares formatado em duas casas decimais, por isso eu usei ".2f"
    return 0; // fim do programa
}
