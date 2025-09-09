/*Leia a idade de uma pessoa e informe:
Criança se for até 12 anos
Adolescente se for de 13 a 17 anos
Adulto se for de 18 a 59 anos
Idoso se for 60 anos ou mais
*/

#include <stdio.h>
int main() {

int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

if (idade <=12) {
    printf("Crianca!");
}
else if (idade >=13, idade <=17) {
    printf("Adolescente!");
}
else if (idade >=18, idade <=59) {
    printf("Adulto!");
}
else if (idade >= 60) {
    printf("Idoso!");
}
else {
    printf("Invalido");
}
    return 0;
}