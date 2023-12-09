#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0, maior, menor, soma_pares = 0, quantidade_pares = 0, quantidade_impares = 0;
    float media, media_pares, porcentagem_impares;

    printf("Digite os numeros (digite 30000 para finalizar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 30000) {
            break;
        }

        soma += numero;
        quantidade++;

        if (quantidade == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        if (numero % 2 == 0) {
            soma_pares += numero;
            quantidade_pares++;
        } else {
            quantidade_impares++;
        }
    }

    media = (float) soma / quantidade;
    media_pares = (float) soma_pares / quantidade_pares;
    porcentagem_impares = (float) quantidade_impares / quantidade * 100;

    printf("Soma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", quantidade);
    printf("Media dos numeros digitados: %.2f\n", media);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Media dos numeros pares: %.2f\n", media_pares);
    printf("Porcentagem dos numeros impares: %.2f%%\n", porcentagem_impares);

    return 0;
}
