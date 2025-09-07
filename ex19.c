/*Escreva um código que leia o código de um determinado produto e
mostre a sua classificação, considerando a seguinte tabela como referência (utilize a estrutura switch case):
*/

#include <stdio.h>
int main(){

int num;

printf("Indique o código do produto: ");
scanf("%d", &num);

switch (num)
{
        case 1:
            printf("Alimento nao perecivel");
            break;
        case 2:
        case 3:
        case 4:
            printf("Alimentos pereciveis");
            break;
        case 5:
        case 6:
            printf("Vestuario");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Limpeza e utensilios domesticos");
            break;
default:
    printf("Invalido");
    
}
    return 0;
}