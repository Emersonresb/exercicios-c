/*Leia uma temperatura em graus Celsius e converta para Fahrenheit usando a fórmula:
F=(C×1.8)+32*/

#include <stdio.h>

int main() {

float temp, fah; 

printf("Quantos graus esta fazendo agora?: ");
scanf("%f", &temp);

fah = (temp*1.8) + 32;

printf("A temperatura agora em Fahrenheit e de %.2f graus\n",fah);

    return 0;
}