#include <stdio.h>

int somaDivisiveis(int a, int b, int c) {
    int soma = 0;
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    int resultado = somaDivisiveis(a, b, c);
    printf("A soma dos números divisíveis por %d entre %d e %d é: %d\n", a, b, c, resultado);

    return 0;
}
