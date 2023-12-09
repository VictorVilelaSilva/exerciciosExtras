#include <stdio.h>

// Sub-rotina para calcular a soma S
float soma(int n) {
  float s = 0;
  for (int i = 0; i <= n; i++) {
    s += (i * i + 1) / (i + 3);
  }
  return s;
}

int main() {
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  // Chama a sub-rotina para calcular a soma S
  float s = soma(n);

  // Imprime o resultado
  printf("A soma S = %.2f\n", s);

  return 0;
}
