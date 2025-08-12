// primeira estrutura em c que eu monto

#include <stdio.h>

int main() {
int idade;
float salario;
char nome[50];

printf("Digite seu nome:");
scanf("%s", nome); // Lê o nome do usuário
printf("Digite sua idade:");
scanf("%d",&idade); // Lê a idade do usuário
printf("Digite seu salario:");
scanf("%f", &salario); // Lê o salário do usuário

printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);
printf("Salario: %.2f\n", salario); // Exibe o salário formatado com duas casas decimais
return 0; // Fim do programa
}
