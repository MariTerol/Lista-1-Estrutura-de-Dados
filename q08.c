//Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    char nome[50];
    float preco;
    int quantidade;
} produto;

void listarprodutos(produto produtos[], int numprodutos) {
	int i=0;
    printf("Produtos Disponiveis:\n");
    for (i = 0; i < numprodutos; i++) {
        printf("%d. %s - $%.2f - Estoque: %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }
}

int main(){
    produto produtos[20];
    int numprodutos = 0;
    

    int op;

    do {
        printf("\nselecione uma opcao\n1. listar produtos\n2. Adicionar ao carrinho\n3. Visualizar carrinho\n0. Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                listarprodutos(produtos, numprodutos);
                break;

            case 2:
                listarprodutos(produtos, numprodutos);
                int produtoIndex;
                printf("Escolha o numero do pedido para adicionar ao carrinho: ");
                scanf("%d", &produtoIndex);

                if (produtoIndex >= 1 && produtoIndex <= numprodutos) {
                    int quantity;
                    printf("Informe a quantidade: ");
                    scanf("%d", &quantity);

                    if (quantity <= produtos[produtoIndex - 1].quantidade) {

                        produtos[produtoIndex - 1].quantidade -= quantity;
                        printf("%d %s Adicionado ao carrinho.\n", quantity, produtos[produtoIndex - 1].nome);
                    } else {
                        printf("Sem estoque.\n");
                    }
                } else {
                    printf("Numero invalido, tente novamente.\n");
                }
                break;

            case 3:

                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida, tente novamente.\n");
        }

    } while (op != 0);
}


/*
Questão 8 - Crie uma struct chamada "Produto" com campos para nome, preço e quantidade em estoque. Escreva um 
programa que permita ao usuário comprar produtos, atualizando o estoque e calculando o total da compra.
*/
