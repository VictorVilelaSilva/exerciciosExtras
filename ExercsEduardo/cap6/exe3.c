#include <stdio.h>

#define TAM 10

int main() {
  int vetor1[TAM], vetor2[TAM], vetor3[2*TAM];

  // Preenche o vetor 1
  for (int i = 0; i < TAM; i++) {
    vetor1[i] = rand() % 100;
  }

  // Preenche o vetor 2
  for (int i = 0; i < TAM; i++) {
    vetor2[i] = rand() % 100;
  }

  // Intercala os dois vetores
  int i = 0, j = 0, k = 0;
  while (i < TAM && j < TAM) {
    if (vetor1[i] < vetor2[j]) {
      vetor3[k++] = vetor1[i++];
    } else {
      vetor3[k++] = vetor2[j++];
    }
  }

  // Copia os elementos restantes do vetor 1
  while (i < TAM) {
    vetor3[k++] = vetor1[i++];
  }

  // Copia os elementos restantes do vetor 2
  while (j < TAM) {
    vetor3[k++] = vetor2[j++];
  }

  // Imprime o vetor resultante
  for (int i = 0; i < 2*TAM; i++) {
    printf("%d ", vetor3[i]);
  }

  return 0;
}
