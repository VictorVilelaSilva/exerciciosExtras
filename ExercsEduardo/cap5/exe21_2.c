#include <stdio.h>

int main() {
  // Declaração das variáveis
  int voto, total_votos = 0, total_nulos = 0, total_brancos = 0, votos_candidato_1 = 0, votos_candidato_2 = 0, votos_candidato_3 = 0, votos_candidato_4 = 0;

  // Leitura dos votos
  while (1) {
    printf("Informe o voto (0 para finalizar): ");
    scanf("%d", &voto);
    if (voto == 0) {
      break;
    } else if (voto >= 1 && voto <= 4) {
      total_votos++;
      if (voto == 1) {
        votos_candidato_1++;
      } else if (voto == 2) {
        votos_candidato_2++;
      } else if (voto == 3) {
        votos_candidato_3++;
      } else {
        votos_candidato_4++;
      }
    } else if (voto == 5) {
      total_nulos++;
    } else {
      total_brancos++;
    }
  }

  // Cálculo da porcentagem de votos nulos e em branco
  float porcentagem_votos_nulos = (total_nulos / total_votos) * 100;
  float porcentagem_votos_brancos = (total_brancos / total_votos) * 100;

  // Impressão dos resultados
  printf("O total de votos é: %d\n", total_votos);
  printf("O total de votos nulos é: %d\n", total_nulos);
  printf("O total de votos em branco é: %d\n", total_brancos);
  printf("A porcentagem de votos nulos é: %.2f%%\n", porcentagem_votos_nulos);
  printf("A porcentagem de votos em branco é: %.2f%%\n", porcentagem_votos_brancos);

  // Identificação do candidato eleito
  int candidato_eleito = 0;
  if (votos_candidato_1 > votos_candidato_2 && votos_candidato_1 > votos_candidato_3 && votos_candidato_1 > votos_candidato_4) {
    candidato_eleito = 1;
  } else if (votos_candidato_2 > votos_candidato_1 && votos_candidato_2 > votos_candidato_3 && votos_candidato_2 > votos_candidato_4) {
    candidato_eleito = 2;
  } else if (votos_candidato_3 > votos_candidato_1 && votos_candidato_3 > votos_candidato_2 && votos_candidato_3 > votos_candidato_4) {
    candidato_eleito = 3;
  } else {
    candidato_eleito = 4;
  }

  printf("O candidato eleito é: %d\n", candidato_eleito);

  return 0;
}
