/*Reescreva o código do exercício anterior utilizando as estruturas
if ou if-else ou if-else-if
*/

#include <stdio.h>
int main() {

int num;
printf("Escreva o codigo do produto: \n");
scanf("%d", &num);

if (num == 1) {
   printf("Alimento nao perecivel \n");
}
else if (num == 2 || num == 3 || num == 4) {
   printf("Alimento perecivel\n");
}
else if (num == 5 || num == 6) {
   printf("Vestuarion\n");
}
else if (num == 7) {
   printf("Higiene pessoal\n");
}
else if (num >= 8 && num <= 15) {
   printf("Limpeza e utensilios domesticos\n");
}
else {
 printf("Codigo invalido\n");
}

    return 0;
}