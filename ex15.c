/*Peça um número inteiro ao usuário e mostre a tabuada de 1 a 10 desse número.*/
/* PRIMEIRA FORMA DE FAZER
#include <stdio.h>

int main() {

int num;

printf("Escreva um numero para ver a tabuada do 10: ");
scanf("%d", &num);

printf("%dx1=%d\n",num,num*1);
printf("%dx2=%d\n",num,num*2);
printf("%dx3=%d\n",num,num*3);
printf("%dx4=%d\n",num,num*4);
printf("%dx5=%d\n",num,num*5);
printf("%dx6=%d\n",num,num*6);
printf("%dx7=%d\n",num,num*7);
printf("%dx8=%d\n",num,num*8);
printf("%dx9=%d\n",num,num*9);
printf("%dx10=%d\n",num,num*10);


    return 0;
} */

#include <stdio.h>
int main () {

int num, i;

printf("Digite um numero para ver a tabuada: ");
scanf("%d", &num);

for (i = 1; i <=10; i++) {
    printf("%d x %d = %d\n", num, i, num*i);
}

return 0;
}

