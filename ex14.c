/*Leia 4 notas de um aluno, calcule a média e mostre se ele foi:
Aprovado (média ≥ 7)
Recuperação (média entre 5 e 6.9)
Reprovado (média < 5).
*/

#include <stdio.h>
int main() {

float n1,n2,n3,n4;
float media;

printf("Digite sua primeira nota: \n");
scanf("%f", &n1);
printf("Digite sua primeira nota: \n");
scanf("%f", &n2);
printf("Digite sua primeira nota: \n");
scanf("%f", &n3);
printf("Digite sua primeira nota: \n");
scanf("%f", &n4);

media = (n1+n2+n3+n4)/4;

if (media >= 7) {
   printf("Parabens, voce foi aprovado\n");
}
else if (media > 5 && media < 6.9) {
    printf("Recuperacao\n");
}
else if (media < 5){
    printf("Voce foi reprovado\n");
}
else {
    printf("Notas invalidas\n");
}
    return 0;
}