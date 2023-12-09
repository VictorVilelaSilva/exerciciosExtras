#include <stdio.h>

int main() {
    int anoNascimento, anoAtual;
    int idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = idadeAnos * 12;
    idadeDias = idadeAnos * 365;
    idadeSemanas = idadeDias / 7;

    printf("Idade em anos: %d\n", idadeAnos);
    printf("Idade em meses: %d\n", idadeMeses);
    printf("Idade em dias: %d\n", idadeDias);
    printf("Idade em semanas: %d\n", idadeSemanas);

    return 0;
}
