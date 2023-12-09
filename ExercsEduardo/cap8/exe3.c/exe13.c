#include <stdio.h>

void calcularFatorial(int A[], int B[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int fatorial = 1;
        for (int j = 1; j <= A[i]; j++) {
            fatorial *= j;
        }
        B[i] = fatorial;
    }
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[10];

    calcularFatorial(A, B, 10);

    printf("Vetor B: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
