#include <stdio.h>

int main() {
  // Declaração das variáveis
  int opcao, salario, novo_salario;

  // Loop do menu
  do {
    // Impressão do menu
    printf("Menu de opções:\n");
    printf("1. Novo salário\n");
    printf("2. Férias\n");
    printf("3. Décimo terceiro\n");
    printf("4. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Tratamento de opção inválida
    if (opcao < 1 || opcao > 4) {
      printf("Opção inválida! Digite uma opção entre 1 e 4.\n");
      continue;
    }

    // Execução da opção selecionada
    switch (opcao) {
      case 1:
        // Recebimento do salário atual
        printf("Informe o salário atual: ");
        scanf("%d", &salario);

        // Cálculo do novo salário
        if (salario <= 210) {
          novo_salario = salario + (salario * 0.15);
        } else if (salario <= 600) {
          novo_salario = salario + (salario * 0.10);
        } else {
          novo_salario = salario + (salario * 0.05);
        }

        // Impressão do novo salário
        printf("O novo salário é: %d\n", novo_salario);
        break;
      case 2:
        // Recebimento do número de meses de férias
        printf("Informe o número de meses de férias: ");
        scanf("%d", &salario);

        // Cálculo do valor das férias
        novo_salario = salario * (salario / 3);

        // Impressão do valor das férias
        printf("O valor das férias é: %d\n", novo_salario);
        break;
      case 3:
        // Recebimento do número de meses trabalhados
        printf("Informe o número de meses trabalhados: ");
        scanf("%d", &salario);

        // Cálculo do valor do décimo terceiro
        novo_salario = salario * (salario / 12);

        // Impressão do valor do décimo terceiro
        printf("O valor do décimo terceiro é: %d\n", novo_salario);
        break;
      case 4:
        // Saída do programa
        printf("Saindo do programa...\n");
        break;
    }
  } while (opcao != 4);

  return 0;
}
