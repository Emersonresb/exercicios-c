/*Peça dois números inteiros e mostre qual deles é o maior (ou se são iguais)*/

#include <stdio.h>
int main(){

int num1,num2;
printf("Digite o primeiro numero:");
scanf("%d", &num1);
printf("Digite o segundo numero:");
scanf("%d", &num2);

if (num1 > num2) {
    printf("O numero %.2d e maior",num1);
}
else if (num1 < num2) {
    printf("O numero %.2d e maior",num2);
}
else { printf ("Sao iguais");
}
    return 0;
}

// finalizado, enviar para correcao