// 3) Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas.


#include <stdio.h>

int main() {

    float totalVendas, comissao;
    printf("Digite o total de vendas do vendedor: ");
    scanf("%f", &totalVendas); // Lê o total de vendas do vendedor
    comissao = totalVendas * 0.10; // Calcula a comissão (10% do total de vendas)
    printf("A comissao do vendedor e: R$%.2f \n", comissao); // Exibe a comissão formatada com duas casas decimais
    return 0; // Fim do programa

}