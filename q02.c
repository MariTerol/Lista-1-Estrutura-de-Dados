//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char letra[50];
    int inteiro;
    float flutuante;
    
}Tipo;


Tipo SetTipo(const char *letra, int inteiro, float flutuante){

    Tipo T;
    strcpy(T.letra, letra);
    T.inteiro= inteiro;
    T.flutuante = flutuante;
    return T;
}

void ImprimeTipo(Tipo T){
    printf("Letra: %s   Inteiro: %d    Flutuante: %.2f\n", T.letra, T.inteiro, T.flutuante);
}


int main(void){

    Tipo teste;

    teste = SetTipo("A",10,3.14);

    ImprimeTipo(teste);

    return 0;
}



/*
Questão 2 - Crie uma struct chamada "Tipo" que possa armazenar um valor do tipo inteiro, um valor do tipo ponto 
flutuante e uma letra. Escreva um programa que demonstre o uso da struct, atribuindo valores de diferentes tipos e 
imprimindo-os.
*/
