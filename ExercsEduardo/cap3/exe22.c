#include <stdio.h>

int main() {
    float salarioMinimo, valorQuilowatt, valorPago, valorPagoDesconto;
    int quilowattsConsumidos;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%d", &quilowattsConsumidos);

    valorQuilowatt = salarioMinimo / 5;
    valorPago = valorQuilowatt * quilowattsConsumidos;
    valorPagoDesconto = valorPago * 0.85;

    printf("Valor de cada quilowatt: R$ %.2f\n", valorQuilowatt);
    printf("Valor a ser pago: R$ %.2f\n", valorPago);
    printf("Valor a ser pago com desconto de 15%%: R$ %.2f\n", valorPagoDesconto);

    return 0;
}
