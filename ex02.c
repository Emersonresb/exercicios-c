// 2) Dadas as medidas de uma sala em metros (comprimento e largura), calcule sua área em metros


#include <stdio.h>

int main() {

float comprimento, largura, area;
printf("Digite o comprimento da sala em metros: ");
scanf("%f", &comprimento); // Lê o comprimento da sala
printf("Digite a largura da sala em metros: ");
scanf("%f", &largura); // Lê a largura da sala
area = comprimento * largura; // Calcula a área da sala
printf("A area da sala e: %.2f metros quadrados\n", area); // Exibe a área formatada com duas casas decimais

return 0; // Fim do programa 

}