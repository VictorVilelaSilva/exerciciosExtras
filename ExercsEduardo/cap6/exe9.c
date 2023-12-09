#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_AVIOES 12

typedef struct {
    int numero;
    char origem[50];
    char destino[50];
    int lugares_disponiveis;
} Voo;

void consultarPorNumero(Voo voos[], int numVoos);
void consultarPorOrigem(Voo voos[], int numVoos);
void consultarPorDestino(Voo voos[], int numVoos);
void efetuarReserva(Voo voos[], int numVoos);

int main() {
    Voo voos[NUM_AVIOES];
    int i, opcao;

    // Inicializa os dados dos voos
    for (i = 0; i < NUM_AVIOES; i++) {
        printf("Informe os dados do voo %d:\n", i + 1);
        voos[i].numero = i + 1;
        printf("Origem: ");
        scanf("%s", voos[i].origem);
        printf("Destino: ");
        scanf("%s", voos[i].destino);
        printf("Lugares disponíveis: ");
        scanf("%d", &voos[i].lugares_disponiveis);
    }

    do {
        printf("\nMenu Principal:\n");
        printf("1. Consultar\n");
        printf("2. Efetuar Reserva\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nMenu Consulta:\n");
                printf("1. Por número do voo\n");
                printf("2. Por origem\n");
                printf("3. Por destino\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        consultarPorNumero(voos, NUM_AVIOES);
                        break;
                    case 2:
                        consultarPorOrigem(voos, NUM_AVIOES);
                        break;
                    case 3:
                        consultarPorDestino(voos, NUM_AVIOES);
                        break;
                    default:
                        printf("Opção inválida.\n");
                }
                break;

            case 2:
                efetuarReserva(voos, NUM_AVIOES);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 3);

    return 0;
}

void consultarPorNumero(Voo voos[], int numVoos) {
    int numeroVoo, i;
    printf("Informe o número do voo: ");
    scanf("%d", &numeroVoo);

    for (i = 0; i < numVoos; i++) {
        if (voos[i].numero == numeroVoo) {
            printf("Voo encontrado:\n");
            printf("Origem: %s\n", voos[i].origem);
            printf("Destino: %s\n", voos[i].destino);
            printf("Lugares disponíveis: %d\n", voos[i].lugares_disponiveis);
            return;
        }
    }

    printf("Voo inexistente.\n");
}

void consultarPorOrigem(Voo voos[], int numVoos) {
    char origem[50];
    int i;
    printf("Informe a origem: ");
    scanf("%s", origem);

    printf("Voos com origem em %s:\n", origem);
    for (i = 0; i < numVoos; i++) {
        if (strcmp(voos[i].origem, origem) == 0) {
            printf("Número do voo: %d\n", voos[i].numero);
            printf("Destino: %s\n", voos[i].destino);
            printf("Lugares disponíveis: %d\n", voos[i].lugares_disponiveis);
            printf("--------\n");
        }
    }
}

void consultarPorDestino(Voo voos[], int numVoos) {
    char destino[50];
    int i;
    printf("Informe o destino: ");
    scanf("%s", destino);

    printf("Voos com destino a %s:\n", destino);
    for (i = 0; i < numVoos; i++) {
        if (strcmp(voos[i].destino, destino) == 0) {
            printf("Número do voo: %d\n", voos[i].numero);
            printf("Origem: %s\n", voos[i].origem);
            printf("Lugares disponíveis: %d\n", voos[i].lugares_disponiveis);
            printf("--------\n");
        }
    }
}

void efetuarReserva(Voo voos[], int numVoos) {
    int numeroVoo, i;
    printf("Informe o número do voo para reserva: ");
    scanf("%d", &numeroVoo);

    for (i = 0; i < numVoos; i++) {
        if (voos[i].numero == numeroVoo) {
            if (voos[i].lugares_disponiveis > 0) {
                printf("Reserva confirmada! Lugares restantes: %d\n", --voos[i].lugares_disponiveis);
            } else {
                printf("Voo lotado.\n");
            }
            return;
        }
    }

    printf("Voo inexistente.\n");
}
