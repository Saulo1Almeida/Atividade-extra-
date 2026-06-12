#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco = produto->preco - (produto->preco * percentual / 100);
}

void imprimir_produtos(Produto *produtos, int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("ID: %d\n", (produtos + i)->id);
        printf("Preco: R$ %.2f\n", (produtos + i)->preco);
        printf("--------------------\n");
    }
}

int main() {
    Produto *produtos;
    int quantidade;
    int i;
    float desconto;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    produtos = malloc(quantidade * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &(produtos + i)->id);

        printf("Preco: ");
        scanf("%f", &(produtos + i)->preco);
    }

    printf("\nDigite o percentual de desconto: ");
    scanf("%f", &desconto);

    for (i = 0; i < quantidade; i++) {
        aplicar_desconto(produtos + i, desconto);
    }

    printf("\nProdutos cadastrados:\n");
    imprimir_produtos(produtos, quantidade);

    free(produtos);

    return 0;
}
