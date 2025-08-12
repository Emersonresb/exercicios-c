// 5. Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere que o percentual de desconto é um número real entre 0 e 1.


#include <stdio.h> 

int main() { 
    float valorCompra, percentualDesconto, valorPago;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra); // Lê o valor da compra
    printf("Digite o percentual de desconto (por exemplo, 0.10 para 10%%): ");
    scanf("%f", &percentualDesconto); // Lê o percentual de desconto
    valorPago=valorCompra * (1 - percentualDesconto); // Calcula o valor a ser pago depois do desconto
    printf("O valor a ser pago e: R$%.2f\n", valorPago); // Exibe o valor a ser pago formatado com duas casas decimais
    return 0; // fim do programa
}