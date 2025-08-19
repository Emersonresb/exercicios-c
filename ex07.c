// suponha uma área na qual esta instalado uma piscina retangular. 
// 1 faça um codigo C que calcule a área da piscina em m² 
// 2 faça um código C que calcule o volume da piscina em m³ sabendo que a profundidade é de 1,2m 


#include <stdio.h>
int main() {
    float comprimento, largura, area, profundidade = 1.2, volume;

    // Solicita ao usuario as dimensões da piscina
    printf("Digite o comprimento da piscina em metros: ");
    scanf("%f", &comprimento); 
    printf("Digite a largura da piscina em metros: ");
    scanf("%f", &largura);

    // calcula a área da piscina
    area = comprimento * largura;
    printf("A área da piscina é %.2f m²\n", area);

    // calcular o volume da piscina 
    volume = area * profundidade;
    printf("O Volume da piscina é %.2f m³\n", volume);

    return 0; // fim do programa
}

