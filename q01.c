//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[50];
    int idade;
    float altura;
    
}Pessoa;


Pessoa SetPessoa(const char *nome, int idade, float altura){

    Pessoa P;
    strcpy(P.nome, nome);
    P.idade= idade;
    P.altura = altura;
    return P;
}

void ImprimePessoa(Pessoa P){
    printf("Nome: %s   Idade: %d    Altura: %.2f\n", P.nome, P.idade, P.altura);
}


int main(void){

    Pessoa mariana;

    mariana = SetPessoa("Mariana",20,1.73);

    ImprimePessoa(mariana);

    return 0;
}




/*
Questão 1 - Crie uma struct chamada "Pessoa" que contenha os seguintes campos: nome, idade e altura. Em seguida, 
escreva um programa que declare uma variável do tipo Pessoa, preencha seus campos e imprima os valores..
*/
