//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
    struct tm dataContratacao;
} Funcionario;

void darAumentoSalario(Funcionario *funcionario, float valorAumento) {
    funcionario->salario += valorAumento;
    printf("O salario de %s foi aumentado em R$%.2f. Novo salario: R$%.2f\n", funcionario->nome, valorAumento, funcionario->salario);
}

int calcularAnosDeTrabalho(Funcionario *funcionario) {
    time_t tempoAtual;
    time(&tempoAtual);
    struct tm *dataAtual = localtime(&tempoAtual);

    int anos = dataAtual->tm_year - funcionario->dataContratacao.tm_year;
    if (dataAtual->tm_mon < funcionario->dataContratacao.tm_mon ||
        (dataAtual->tm_mon == funcionario->dataContratacao.tm_mon && dataAtual->tm_mday < funcionario->dataContratacao.tm_mday)) {
        anos--;
    }

    return anos;
}

int main() {
    Funcionario emp1 = {
        .nome = "Mariana Terol",
        .cargo = "Gerente",
        .salario = 50000.0,
        .dataContratacao = { .tm_year = 2020 - 1900, .tm_mon = 6, .tm_mday = 15 }
    };

    printf("Funcionario: %s\nCargo: %s\nSalario: R$%.2f\nData de Contratacao: %d-%02d-%02d\n",
           emp1.nome, emp1.cargo, emp1.salario,
           emp1.dataContratacao.tm_year + 1900, emp1.dataContratacao.tm_mon + 1, emp1.dataContratacao.tm_mday);

    darAumentoSalario(&emp1, 2000.0);

    int anosTrabalhados = calcularAnosDeTrabalho(&emp1);
    printf("%s trabalha na empresa ha %d anos.\n", emp1.nome, anosTrabalhados);

    return 0;
}


/*
Questão 9 - Crie uma struct chamada "Funcionario" com campos para nome, cargo, salário e data de admissão. 
Implemente funções para dar um aumento de salário e calcular quanto tempo um funcionário está na empresa.
*/