#include <stdio.h>

#define SIZE 8

int main() {
    int matriz[SIZE][SIZE];
    int simetrica = 1; // assume que a matriz é simétrica

    // preenche a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // verifica se a matriz é simétrica
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; // a matriz não é simétrica
                break;
            }
        }
        if (!simetrica) {
            break;
        }
    }

    // exibe o resultado
    if (simetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}
