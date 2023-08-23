//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{

    double x;
    double y;
    
}Ponto;

Ponto SetPonto(double x, double y) {
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}


double CalcularDistancia(Ponto p1, Ponto p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

double CalcularInclinacao(Ponto p1, Ponto p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}


int main(void){

    Ponto ponto1 = SetPonto(0.0, 0.0);
    Ponto ponto2 = SetPonto(2.0, 4.0); //numeros aleatorios (teste)

    double distancia = CalcularDistancia(ponto1, ponto2);
    double inclinacao = CalcularInclinacao(ponto1, ponto2);

    printf("------------------=Pontos=------------------\n");
    printf("Distancia entre os pontos: %.2f\n", distancia);
    printf("Inclinacao da reta que conecta os pontos: %.2f\n", inclinacao);

    return 0;
}


/*
Questão 3 - Crie uma struct chamada "Ponto" que represente um ponto no plano cartesiano com coordenadas x e y. 
Em seguida, implemente funções para calcular a distância entre dois pontos e a inclinação da reta que os conecta.
*/