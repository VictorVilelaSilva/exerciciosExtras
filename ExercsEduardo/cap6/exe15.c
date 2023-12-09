#include <stdio.h>

#define TAMANHO_PRIMEIRO_VETOR 10
#define TAMANHO_SEGUNDO_VETOR 5

int main() {
    int primeiroVetor[TAMANHO_PRIMEIRO_VETOR];
    int segundoVetor[TAMANHO_SEGUNDO_VETOR];

    // Preenche o primeiro vetor com números inteiros
    printf("Digite os %d números do primeiro vetor:\n", TAMANHO_PRIMEIRO_VETOR);
    for (int i = 0; i < TAMANHO_PRIMEIRO_VETOR; i++) {
        scanf("%d", &primeiroVetor[i]);
    }

    // Preenche o segundo vetor com números inteiros
    printf("Digite os %d números do segundo vetor:\n", TAMANHO_SEGUNDO_VETOR);
    for (int i = 0; i < TAMANHO_SEGUNDO_VETOR; i++) {
        scanf("%d", &segundoVetor[i]);
    }

    // Mostra os números do primeiro vetor com seus divisores e posições
    printf("Números do primeiro vetor com seus divisores e posições:\n");
    for (int i = 0; i < TAMANHO_PRIMEIRO_VETOR; i++) {
        printf("Número: %d\n", primeiroVetor[i]);
        printf("Divisores: ");
        for (int j = 0; j < TAMANHO_SEGUNDO_VETOR; j++) {
            if (primeiroVetor[i] % segundoVetor[j] == 0) {
                printf("%d ", segundoVetor[j]);
            }
        }
        printf("\nPosição: %d\n", i);
        printf("\n");
    }

    return 0;
}
