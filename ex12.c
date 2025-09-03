/*Conceito Escolar: Leia a nota de um aluno (0 a 100) e mostre o conceito:
 A (90 a 100), B (70 a 89), C (50 a 69), D (menor que 50)
*/

#include <stdio.h>
int main(){

int nota;
printf("Digite sua nota final:");
scanf("%d",&nota);

if (nota >= 90) {
    printf("Voce tirou A");
}

else if (nota >= 70) {
    printf("Voce tirou B");
}

else if (nota >= 50) {
    printf("Voce tirou C");
}

else {
    printf("Voce tirou D");
}
    return 0;
}