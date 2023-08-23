//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

int main(void){
    
    int i=0;

    struct lista_de_contato{

    char nome[50];
    char telefone[30];
    
  };


    struct lista_de_contato contato[TAM];
    int totalContatos = 0;
    int escolha;
    

    do {
        printf("\n--=Selecione uma opcao:=--\n");
        printf("1. Adicionar um contato\n");
        printf("2. Listar todos os contatos\n");
        printf("3. Buscar um contato pelo nome\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                if (totalContatos < 100) {
                    printf("Digite o nome do contato: ");
                    fflush(stdin);
                    scanf("%[^\n]s", contato[totalContatos].nome);
                    fflush(stdin);

                    printf("Digite o numero de telefone: ");
                    scanf("%[^\n]s", contato[totalContatos].telefone);
                    fflush(stdin);

                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("A Lista esta cheia. Nao e possivel adicionar mais contatos.\n");
                }
                break;

            case 2:
                if (totalContatos > 0) {
                    printf("\n--=Lista de Contatos:=--\n");
                    for (i = 0; i < totalContatos; i++) {
                        printf("Nome: %s\n", contato[i].nome);
                        printf("Telefone: %s\n", contato[i].telefone);
                        printf("-----------------------------\n");
                    }
                } else {
                    printf("A Lista esta vazia. Adicione contatos primeiro.\n");
                }
                break;

            case 3:
                if (totalContatos > 0) {
                    char nomeBusca[50];
                    printf("Digite o nome do contato que deseja buscar: ");
                    fflush(stdin);
                    scanf("%[^\n]s", nomeBusca);
                    fflush(stdin);

                    int encontrado = 0;
                    for (i = 0; i < totalContatos; i++) {
                        if (strcmp(nomeBusca, contato[i].nome) == 0) {
                            printf("--=Contato encontrado:=--\n");
                            printf("Nome: %s\n", contato[i].nome);
                            printf("Telefone: %s\n", contato[i].telefone);
                            encontrado = 1;
                            break;
                        }
                    }

                    if (!encontrado) {
                        printf("Contato nao encontrado.\n");
                    }
                } else {
                    printf("A Lista esta vazia. Adicione contatos primeiro.\n");
                }
                break;

            case 4:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (escolha != 4);

    return 0;
}

/*
Questão 4 - Crie uma struct chamada "Contato" que armazene o nome e o número de telefone de uma contato. escreva 
um programa que permita ao usuário adicionar contatos, listar todos os contatos e buscar um contato pelo nome.
*/
