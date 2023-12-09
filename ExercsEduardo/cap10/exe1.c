#include <stdio.h>
#include <stdlib.h>

#define NUM_VENDEDORES 4
#define NUM_MESES 12

typedef struct {
    int codigo;
    char nome[50];
} Vendedor;

typedef struct {
    int codigo_vendedor;
    int mes;
    float valor_venda;
} Venda;

void cadastrarVendedor(Vendedor vendedores[], int *numVendedores);
void cadastrarVenda(Venda vendas[], int *numVendas);
void consultarVendasPorFuncionario(Venda vendas[], int numVendas);
void consultarTotalVendasPorVendedor(Venda vendas[], int numVendas);
void vendedorMaisVendeuNoMes(Venda vendas[], int numVendas);
void mesComMaisVendas(Venda vendas[], int numVendas);

int main() {
    Vendedor vendedores[NUM_VENDEDORES];
    Venda vendas[NUM_MESES * NUM_VENDEDORES];
    int opcao, numVendedores = 0, numVendas = 0;

    do {
        printf("\nMenu Principal:\n");
        printf("1. Cadastrar vendedor\n");
        printf("2. Cadastrar venda\n");
        printf("3. Consultar vendas de um funcionário em determinado mês\n");
        printf("4. Consultar total das vendas de determinado vendedor\n");
        printf("5. Mostrar número do vendedor que mais vendeu em determinado mês\n");
        printf("6. Mostrar número do mês com mais vendas\n");
        printf("7. Finalizar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarVendedor(vendedores, &numVendedores);
                break;
            case 2:
                cadastrarVenda(vendas, &numVendas);
                break;
            case 3:
                consultarVendasPorFuncionario(vendas, numVendas);
                break;
            case 4:
                consultarTotalVendasPorVendedor(vendas, numVendas);
                break;
            case 5:
                vendedorMaisVendeuNoMes(vendas, numVendas);
                break;
            case 6:
                mesComMaisVendas(vendas, numVendas);
                break;
            case 7:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 7);

    return 0;
}

void cadastrarVendedor(Vendedor vendedores[], int *numVendedores) {
    if (*numVendedores < NUM_VENDEDORES) {
        int codigo;
        printf("Informe o código do vendedor: ");
        scanf("%d", &codigo);

        // Verifica se o código já existe
        for (int i = 0; i < *numVendedores; i++) {
            if (vendedores[i].codigo == codigo) {
                printf("Erro: Código já existente. Tente novamente.\n");
                return;
            }
        }

        vendedores[*numVendedores].codigo = codigo;
        printf("Informe o nome do vendedor: ");
        scanf("%s", vendedores[*numVendedores].nome);

        (*numVendedores)++;
        printf("Vendedor cadastrado com sucesso!\n");
    } else {
        printf("Erro: Limite de vendedores atingido.\n");
    }
}

void cadastrarVenda(Venda vendas[], int *numVendas) {
    if (*numVendas < NUM_MESES * NUM_VENDEDORES) {
        int codigo_vendedor, mes;
        float valor_venda;
        printf("Informe o código do vendedor: ");
        scanf("%d", &codigo_vendedor);
        printf("Informe o número do mês: ");
        scanf("%d", &mes);

        // Verifica se já existe venda para esse vendedor no mesmo mês
        for (int i = 0; i < *numVendas; i++) {
            if (vendas[i].codigo_vendedor == codigo_vendedor && vendas[i].mes == mes) {
                printf("Erro: Já existe uma venda para esse vendedor no mesmo mês. Tente novamente.\n");
                return;
            }
        }

        printf("Informe o valor da venda: ");
        scanf("%f", &valor_venda);

        vendas[*numVendas].codigo_vendedor = codigo_vendedor;
        vendas[*numVendas].mes = mes;
        vendas[*numVendas].valor_venda = valor_venda;

        (*numVendas)++;
        printf("Venda cadastrada com sucesso!\n");
    } else {
        printf("Erro: Limite de vendas atingido.\n");
    }
}

void consultarVendasPorFuncionario(Venda vendas[], int numVendas) {
    int codigo_vendedor, mes;
    float total = 0;
    printf("Informe o código do vendedor: ");
    scanf("%d", &codigo_vendedor);
    printf("Informe o número do mês: ");
    scanf("%d", &mes);

    for (int i = 0; i < numVendas; i++) {
        if (vendas[i].codigo_vendedor == codigo_vendedor && vendas[i].mes == mes) {
            total += vendas[i].valor_venda;
        }
    }

    printf("Total de vendas do vendedor %d no mês %d: R$ %.2f\n", codigo_vendedor, mes, total);
}

void consultarTotalVendasPorVendedor(Venda vendas[], int numVendas) {
    int codigo_vendedor;
    float total = 0;
    printf("Informe o código do vendedor: ");
    scanf("%d", &codigo_vendedor);

    for (int i = 0; i < numVendas; i++) {
        if (vendas[i].codigo_vendedor == codigo_vendedor) {
            total += vendas[i].valor_venda;
        }
    }

    printf("Total de vendas do vendedor %d: R$ %.2f\n", codigo_vendedor, total);
}

void vendedorMaisVendeuNoMes(Venda vendas[], int numVendas) {
    int mes, codigoMaisVendido;
    float valorMaisVendido = 0;

    printf("Informe o número do mês: ");
    scanf("%d", &mes);

    for (int i = 0; i < NUM_VENDEDORES; i++) {
        float total = 0;
        for (int j = 0; j < numVendas; j++) {
            if (vendas[j].codigo_vendedor == i + 1 && vendas[j].mes == mes) {
                total += vendas[j].valor_venda;
            }
        }

        if (total > valorMaisVendido) {
            valorMaisVendido = total;
            codigoMaisVendido = i + 1;
        }
    }

    printf("Vendedor que mais vendeu no mês %d: Vendedor %d\n", mes, codigoMaisVendido);
}

void mesComMaisVendas(Venda vendas[], int numVendas) {
    int mesMaisVendido;
    float valorMaisVendido = 0;

    for (int i = 1; i <= NUM_MESES; i++) {
        float total = 0;
        for (int j = 0; j < numVendas; j++) {
            if (vendas[j].mes == i) {
                total += vendas[j].valor_venda;
            }
        }

        if (total > valorMaisVendido) {
            valorMaisVendido = total;
            mesMaisVendido = i;
        }
    }

    printf("Mês com mais vendas: Mês %d\n", mesMaisVendido);
}
