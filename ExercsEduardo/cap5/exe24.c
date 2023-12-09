#include <stdio.h>

int main() {
  // Declaração das variáveis
  float salario;
  int opcao;

  // Menu de opções
  do {
    printf("Menu de opções:\n");
    printf("1. Imposto\n");
    printf("2. Novo salário\n");
    printf("3. Classificação\n");
    printf("4. Finalizar o programa\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Opção inválida
    if (opcao < 1 || opcao > 4) {
      printf("Opção inválida.\n");
    }
  } while (opcao < 1 || opcao > 4);

  // Opção 1 - Imposto
  if (opcao == 1) {
    // Recebe o salário do funcionário
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Calcula o valor do imposto
    float imposto = 0.0;
    if (salario < 500.0) {
      imposto = salario * 0.05;
    } else if (salario <= 850.0) {
      imposto = salario * 0.10;
    } else {
      imposto = salario * 0.15;
    }

    // Mostra o valor do imposto
    printf("O valor do imposto é R$%.2f.\n", imposto);
  }

  // Opção 2 - Novo salário
  else if (opcao == 2) {
    // Recebe o salário do funcionário
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Calcula o valor do aumento
    float aumento = 0.0;
    if (salario > 1500.0) {
      aumento = 25.0;
    } else if (salario >= 750.0) {
      aumento = 50.0;
    } else if (salario >= 450.0) {
      aumento = 75.0;
    } else {
      aumento = 100.0;
    }

    // Calcula o novo salário
    float novo_salario = salario + aumento;

    // Mostra o novo salário
    printf("O novo salário é R$%.2f.\n", novo_salario);
  }

  // Opção 3 - Classificação
  else if (opcao == 3) {
    // Recebe o salário do funcionário
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Classifica o funcionário
    char classificacao;
    if (salario <= 700.0) {
      classificacao = 'M';
    } else {
      classificacao = 'B';
    }

    // Mostra a classificação do funcionário
    printf("A classificação do funcionário é %c.\n", classificacao);
  }

  // Opção 4 - Finalizar o programa
  else {
    // Finaliza o programa
    printf("Programa finalizado.\n");
  }

  return 0;
}
