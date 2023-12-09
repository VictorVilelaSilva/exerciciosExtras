#include <stdio.h>

int main() {
    float peso, novoPeso;

    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    novoPeso = peso + (peso * 0.15);
    printf("Novo peso se a pessoa engordar 15%%: %.2f\n", novoPeso);

    novoPeso = peso - (peso * 0.20);
    printf("Novo peso se a pessoa emagrecer 20%%: %.2f\n", novoPeso);

    return 0;
}
