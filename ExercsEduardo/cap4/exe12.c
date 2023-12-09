#include <stdio.h>

int main() {
    float salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salarioBruto);

    gratificacao = salarioBruto * 0.05; // 5% de gratificação
    imposto = salarioBruto * 0.07; // 7% de imposto

    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("O valor a receber é: R$ %.2f\n", salarioLiquido);

    return 0;
}
