/*Faça um código que leia um número de 1 a 7 e imprima o dia correspondente da
semana.
*/

#include <stdio.h>

int main(){

int num;

printf("Escolha um número de 1 a 7: ");
scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("Hoje é domingo \n");
            break;
        case 2:
            printf("Hoje é segunda \n");
            break;
        case 3:
            printf("Hoje é terça \n");
            break;
        case 4:
            printf("Hoje é quarta \n");
            break;
        case 5:
            printf("Hoje é quinta \n");
            break;
        case 6:
            printf("Hoje é seu dia de sorte \n");
            printf("Hoje é sexta-feira \n");
            break;
        case 7:
            printf("Hoje é sábado \n");
            break;
    default:
        printf("Número invalido");
    }

return 0;
}