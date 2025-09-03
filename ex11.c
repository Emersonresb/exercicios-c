/* Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o
valor do produto e imprimir o valor da venda.
*/

#include <stdio.h>
int main() {

float v_produto, v_venda;

printf("Qual o valor do produto adquirido?:");
scanf("%f", &v_produto);


if (v_produto < 20) {
    v_venda = v_produto * 1.45;
    printf("Venda seu produto por R$%.2f para obter um lucro de 45%%", v_venda);
}
else { 
    v_venda = v_produto * 1.30;
    printf("O valor da venda do seu produto deve ser de R$%.2f para obter 30%% de lucro ", v_venda);
}
    return 0;
}