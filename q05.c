//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

int main(void){
    
    int i=0;

    struct lista_de_livro{

    char titulo[50];
    char autor[50];
    int anop;
    
  };


    struct lista_de_livro livro[TAM];
    int totallivros = 0;
    int escolha;

    do {
        printf("\n--=Selecione uma opcao:=--\n");
        printf("1. Adicionar um livro\n");
        printf("2. Listar todos os livros\n");
        printf("3. Buscar um livro pelo titulo\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                if (totallivros < 100) {
                    printf("Digite o titulo do livro: ");
                    fflush(stdin);
                    scanf("%[^\n]s", livro[totallivros].titulo);
                    
                    printf("Digite o nome do autor: ");
                    fflush(stdin);
                    scanf("%[^\n]s", livro[totallivros].autor);
                    
                    printf("Digite o ano de publicacao: ");
                    
                    scanf("%d", &livro[totallivros].anop);
                    totallivros++;
                    printf("livro adicionado com sucesso!\n");
                } else {
                    printf("A Lista esta cheia. Nao e possivel adicionar mais livros.\n");
                }
                break;

            case 2:
                if (totallivros > 0) {
                    printf("\n--=Lista de livros:=--\n");
                    for (i = 0; i < totallivros; i++) {
                        printf("titulo: %s\n", livro[i].titulo);
                        printf("autor: %s\n", livro[i].autor);
                        printf("ano de publicacao: %d\n", livro[i].anop);
                        printf("-----------------------------\n");
                    }
                } else {
                    printf("A Lista esta vazia. Adicione livros primeiro.\n");
                }
                break;

            case 3:
                if (totallivros > 0) {
                    char tituloBusca[50];
                    printf("Digite o titulo do livro que deseja buscar: ");
                    fflush(stdin);
                    scanf("%[^\n]s", tituloBusca);
                    

                    int encontrado = 0;
                    for (i = 0; i < totallivros; i++) {
                        if (strcmp(tituloBusca, livro[i].titulo) == 0) {
                            printf("--=livro encontrado:=--\n");
                            printf("titulo: %s\n", livro[i].titulo);
                            printf("autor: %s\n", livro[i].autor);
                            printf("ano de publicacao: %d\n", livro[i].anop);
                            encontrado = 1;
                            break;
                        }
                    }

                    if (!encontrado) {
                        printf("livro nao encontrado.\n");
                    }
                } else {
                    printf("A Lista esta vazia. Adicione livros primeiro.\n");
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
Questão 5 - Crie uma struct chamada "Livro" com campos para título, autor e ano de publicação. Escreva um programa 
que permita ao usuário adicionar informações de livros, listar todos os livros cadastrados e buscar livros por autor.
*/