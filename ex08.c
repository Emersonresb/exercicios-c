/*Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação, considerando
que a média no exame é 6.
*/

#include <stdio.h> 

int main() {
 
    float n1,n2,n3,media;
    
    printf("Digite a sua primeira nota:");
    scanf("%f",&n1);
    printf("Digite a sua segunda nota:");
    scanf("%f",&n2);
    printf("Digite a sua terceira nota:");
    scanf("%f",&n3);
    
    media = (n1+n2+n3)/3;
    printf("Sua media foi %.2f \n",media);

    if (media >= 6)printf("Parabens, voce foi aprovado");
    
    else printf("Voce foi reprovado, tente novamente semana que vem");





    return 0;
}

// Funcionou 100% 