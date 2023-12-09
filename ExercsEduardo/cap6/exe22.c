#include <stdio.h>

#define TAMANHO 10

void compactarVetor(int vetorA[], int vetorB[], int *tamanhoB) {
    int i;
    *tamanhoB = 0;

    for (i = 0; i < TAMANHO; i++) {
        if (vetorA[i] > 0) {
            vetorB[*tamanhoB] = vetorA[i];
            (*tamanhoB)++;
        }
    }
}

int main() {
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int tamanhoB;
    int i;

    // Leitura do vetor A
    printf("Digite os valores do vetor A:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Compactação do vetor A para o vetor B
    compactarVetor(vetorA, vetorB, &tamanhoB);

    // Exibição do vetor B
    printf("Vetor B:\n");
    for (i = 0; i < tamanhoB; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    return 0;
}
