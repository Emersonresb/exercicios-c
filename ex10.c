/* A prefeitura de uma cidade abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação e
informar se o empréstimo pode ou não ser concedido 
*/

#include <stdio.h>

int main() {

float salario, prestacao, limite;

 printf("Qual o seu salario bruto?:");
 scanf("%f", &salario);
 printf("Digite o valor da prestacao:");
 scanf("%f", &prestacao);

limite = salario * 0.30;

if (prestacao <= limite){
    printf("Seu emprestimo foi aprovado");
}
else {
    printf("Seu emprestimo foi recusado");
}
printf("Seu limite é %2.f e sua prestacao é %2.f \n", limite, prestacao);

    return 0;
}

//FIM! 