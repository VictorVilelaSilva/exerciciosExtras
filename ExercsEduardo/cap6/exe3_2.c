#include <stdio.h>

#define MAX_PRODUTOS 10

int main() {
    int codigoProduto[MAX_PRODUTOS];
    int estoqueProduto[MAX_PRODUTOS];
    int codigoCliente, codigoProdutoDesejado, quantidade;
    int i, j, encontrado, atendido;

    // Preencher os vetores com os códigos dos produtos e seus respectivos estoques
    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite o código do produto %d: ", i + 1);
        scanf("%d", &codigoProduto[i]);
        printf("Digite o estoque do produto %d: ", i + 1);
        scanf("%d", &estoqueProduto[i]);
    }

    // Ler os pedidos dos clientes
    do {
        printf("Digite o código do cliente (ou 0 para sair): ");
        scanf("%d", &codigoCliente);

        if (codigoCliente != 0) {
            printf("Digite o código do produto desejado: ");
            scanf("%d", &codigoProdutoDesejado);
            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidade);

            encontrado = 0;
            atendido = 0;

            // Verificar se o código do produto existe
            for (i = 0; i < MAX_PRODUTOS; i++) {
                if (codigoProduto[i] == codigoProdutoDesejado) {
                    encontrado = 1;

                    // Verificar se há estoque suficiente
                    if (estoqueProduto[i] >= quantidade) {
                        estoqueProduto[i] -= quantidade;
                        atendido = 1;
                        break;
                    }
                }
            }

            // Exibir mensagens de acordo com o resultado do pedido
            if (encontrado == 0) {
                printf("Código inexistente\n");
            } else if (atendido == 0) {
                printf("Não temos estoque suficiente dessa mercadoria\n");
            } else {
                printf("Pedido atendido. Obrigado e volte sempre\n");
            }
        }
    } while (codigoCliente != 0);

    // Exibir os códigos dos produtos com seus respectivos estoques atualizados
    printf("Estoque atualizado:\n");
    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Código do produto: %d - Estoque: %d\n", codigoProduto[i], estoqueProduto[i]);
    }

    return 0;
}
