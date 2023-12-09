#include <stdio.h>

float calcularMediaAritmetica(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

float calcularMediaPonderada(float nota1, float nota2, float nota3) {
    return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
}

int main() {
    float nota1, nota2, nota3;
    char letra;
    
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    printf("Digite a letra (A para média aritmética, P para média ponderada): ");
    scanf(" %c", &letra);
    
    float media;
    
    if (letra == 'A') {
        media = calcularMediaAritmetica(nota1, nota2, nota3);
    } else if (letra == 'P') {
        media = calcularMediaPonderada(nota1, nota2, nota3);
    } else {
        printf("Letra inválida!\n");
        return 0;
    }
    
    printf("A média do aluno é: %.2f\n", media);
    
    return 0;
}
