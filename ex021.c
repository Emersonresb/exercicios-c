/*  Faça um código em C para calcular o volume (V) de uma esfera, dada pela fórmula: V = 4/3 * pi * r³ 
Peça o valor do Raio (r) para o usuário e declare a variável float pi = 3.14;
Imprima o resultado do volume.
*/

#include <stdio.h>
int main() {

float raio, pi = 3.14, V;

printf("Qual o raio da esfera?: ");
scanf("%f", &raio);

V = (4.0 / 3.0) * pi * raio * raio * raio;

printf("O volume da esfera e de: %.2f\n", V);

    return 0;
}