//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ContaBancaria{
    char nome[50];
    int numero;
    float saldo;
}ContaBancaria;

ContaBancaria conta(const char* name){
    ContaBancaria acc;
    strncpy(acc.nome, name, sizeof(acc.nome));
    acc.numero = 1000;  
    acc.saldo = 0;
    return acc;
}

void verificarsaldo(ContaBancaria *acc){
    printf("%s\n", acc->nome);
    printf("Numero da conta: %d\n", acc->numero);
    printf("Seu saldo e: %.2f\n", acc->saldo);
}

void deposito(ContaBancaria *acc, float ammount){
    acc->saldo += ammount;
    printf("Depositado R$:%.2f\n", ammount);
    printf("saldo: %.2f\n", acc->saldo);
}

void saque(ContaBancaria *acc, float ammount){
    acc->saldo -= ammount;
    printf("Retirado R$:%.2f\n", ammount);
    printf("saldo: %.2f\n", acc->saldo);
}

int main(void){
    ContaBancaria ac1;

    ac1 = conta("Usuario: Mariana Terol");

    verificarsaldo(&ac1);

    deposito(&ac1, 1000);
    saque(&ac1, 500);

    verificarsaldo(&ac1);

}

/*
Questão 7 - Crie uma struct chamada "ContaBancaria" com campos para nome do titular, número da conta e saldo. 
Implemente funções para depositar, sacar e verificar o saldo.
*/