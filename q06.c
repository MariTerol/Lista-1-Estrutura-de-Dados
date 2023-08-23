//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_DISCIPLINAS 3

struct Estudante {
    char nome[50];
    int matricula;
    float notas[NUM_DISCIPLINAS];
};


float calcularMedia(struct Estudante estudante) {
    float soma = 0;
    int i=0;
    for (i = 0; i < NUM_DISCIPLINAS; i++) {
        soma += estudante.notas[i];
    }
    return soma / NUM_DISCIPLINAS;
}


bool estaAprovado(struct Estudante estudante) {
    float media = calcularMedia(estudante);
    return (media >= 7.0);
}

int main() {

    int i=0;

    struct Estudante aluno;

    printf("Informe o nome do aluno: ");
    fflush(stdin);
    scanf("%[^\n]s", aluno.nome);

    printf("Informe a matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Informe as notas do aluno nas %d disciplinas:\n", NUM_DISCIPLINAS);
    for (i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Nota na disciplina %d: ", i + 1);
        scanf("%f", &aluno.notas[i]);
    }

    printf("\n--=Resumo do Aluno:=--\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Notas: ");
    for (i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("%.2f ", aluno.notas[i]);
    }
    
    float media = calcularMedia(aluno);
    printf("\n-> Media das notas: %.2f\n", media);

    if (estaAprovado(aluno)) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}


/*
Questão 6 - Crie uma struct chamada "Estudante" com campos para nome, matrícula e notas em três disciplinas. 
Implemente funções para calcular a média das notas e determinar se um aluno está aprovado (média maior ou igual a 
7).
*/