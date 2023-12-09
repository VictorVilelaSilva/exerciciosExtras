#include <stdio.h>

struct Aluno {
    int codigo;
    int idade;
    int provas;
};

int main() {
    struct Aluno alunos[100];
    int quantidadeAlunos = 0;
    int codigoDisciplina;
    int alunosEntre18e25 = 0;
    int alunosMenosDeTresProvas = 0;
    int somaIdadeSemProva = 0;
    int quantidadeAlunosSemProva = 0;

    printf("Digite o código da disciplina: ");
    scanf("%d", &codigoDisciplina);

    // Preencher os dados dos alunos (exemplo)
    alunos[0].codigo = 1;
    alunos[0].idade = 20;
    alunos[0].provas = 3;

    alunos[1].codigo = 2;
    alunos[1].idade = 22;
    alunos[1].provas = 1;

    alunos[2].codigo = 3;
    alunos[2].idade = 19;
    alunos[2].provas = 4;

    quantidadeAlunos = 3;

    // Verificar quantidade de alunos entre 18 e 25 anos com mais de duas provas na disciplina
    for (int i = 0; i < quantidadeAlunos; i++) {
        if (alunos[i].idade >= 18 && alunos[i].idade <= 25 && alunos[i].provas > 2) {
            alunosEntre18e25++;
        }
    }

    // Listar alunos com menos de três provas na disciplina
    printf("Alunos com menos de três provas na disciplina %d:\n", codigoDisciplina);
    for (int i = 0; i < quantidadeAlunos; i++) {
        if (alunos[i].provas < 3) {
            printf("Aluno: %d, Disciplina: %d\n", alunos[i].codigo, codigoDisciplina);
            alunosMenosDeTresProvas++;
        }
    }

    // Calcular média de idade dos alunos sem prova em alguma disciplina
    for (int i = 0; i < quantidadeAlunos; i++) {
        if (alunos[i].provas == 0) {
            somaIdadeSemProva += alunos[i].idade;
            quantidadeAlunosSemProva++;
        }
    }

    float mediaIdadeSemProva = 0;
    if (quantidadeAlunosSemProva > 0) {
        mediaIdadeSemProva = (float)somaIdadeSemProva / quantidadeAlunosSemProva;
    }

    printf("Quantidade de alunos entre 18 e 25 anos com mais de duas provas na disciplina: %d\n", alunosEntre18e25);
    printf("Quantidade de alunos com menos de três provas na disciplina: %d\n", alunosMenosDeTresProvas);
    printf("Média de idade dos alunos sem prova em alguma disciplina: %.2f\n", mediaIdadeSemProva);

    return 0;
}
