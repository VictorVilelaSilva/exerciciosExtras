#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_minimo, valor_hora, salario_bruto, imposto, salario_receber;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    valor_hora = salario_minimo / 2;
    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = salario_bruto * 0.03;
    salario_receber = salario_bruto - imposto;

    printf("O salário a receber é: %.2f\n", salario_receber);

    return 0;
}
