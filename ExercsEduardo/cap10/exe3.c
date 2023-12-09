#include <stdio.h>
#include <string.h>

// Definindo a estrutura dos registros
typedef struct {
  char nome[20];
  char codigo[10];
  char doc[50];
} registro;

// Função que verifica se um e-mail é válido
int email_valido(char *email) {
  int i, pos_arroba, pos_ponto;
  pos_arroba = -1; // Inicializando a posição da @ como -1
  pos_ponto = -1; // Inicializando a posição do . como -1
  for (i = 0; email[i] != '\0'; i++) { // Percorrendo a string do e-mail
    if (email[i] == '@') { // Se encontrou uma @
      pos_arroba = i; // Guarda a posição da @
    }
    if (email[i] == '.') { // Se encontrou um .
      pos_ponto = i; // Guarda a posição do .
    }
  }
  // Retorna 1 se existe uma @ e um ., e se a posição da @ é anterior à posição do .
  return (pos_arroba != -1 && pos_ponto != -1 && pos_arroba < pos_ponto);
}

int main() {
  // Criando um vetor de registros
  registro registros[5] = {
    {"clientes", "doc1", "cliente1@gmail.com"},
    {"clientes", "doc2", "cliente2@outlook.com"},
    {"clientes", "doc3", "cliente3@yahoo.com.br"},
    {"clientes", "doc4", "cliente4@invalido"},
    {"clientes", "doc5", "cliente5.invalido.com"}
  };

  int i;
  // Percorrendo o vetor de registros
  for (i = 0; i < 5; i++) {
    // Imprimindo o nome, o código e o e-mail do registro atual
    printf("Nome: %s\n", registros[i].nome);
    printf("Codigo: %s\n", registros[i].codigo);
    printf("Doc: %s\n", registros[i].doc);
    // Verificando se o e-mail é válido
    if (email_valido(registros[i].doc)) {
      printf("E-mail valido!\n");
    }
    else {
      printf("E-mail invalido!\n");
    }
    printf("\n"); // Pulando uma linha
  }

  return 0;
}
