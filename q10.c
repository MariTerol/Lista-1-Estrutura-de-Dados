//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

typedef struct Moeda {
    float dolares;
    float euros;
} Moeda;

void converterDolaresParaEuros(Moeda *moeda, float taxa) {
    moeda->euros = moeda->dolares * taxa;
}

void converterEurosParaDolares(Moeda *moeda, float taxa) {
    moeda->dolares = moeda->euros / taxa;
}

int main() {
    float taxaDeCambio = 0.85; 

    Moeda dinheiro;

    int escolha;
    printf("--=Selecione a Moeda:=--\n");
    printf("1. Dolares\n");
    printf("2. Euros\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a quantia em Dolares: $");
        scanf("%f", &dinheiro.dolares);
        converterDolaresParaEuros(&dinheiro, taxaDeCambio);
        printf("Quantia convertida: %.2f Dolares = %.2f Euros\n", dinheiro.dolares, dinheiro.euros);
    } else if (escolha == 2) {
        printf("Digite a quantia em Euros: €");
        scanf("%f", &dinheiro.euros);
        converterEurosParaDolares(&dinheiro, taxaDeCambio);
        printf("Quantia convertida: %.2f Euros = %.2f Dolares\n", dinheiro.euros, dinheiro.dolares);
    } else {
        printf("Escolha inválida.\n");
    }

    return 0;
}



/*
Questão 10 - Crie uma struct chamada "Moeda" que possa armazenar valores em dólares e euros. Escreva um programa 
que permita ao usuário escolher uma moeda e converter um valor entre dólares e euros, usando a taxa de câmbio 
atual.
*/