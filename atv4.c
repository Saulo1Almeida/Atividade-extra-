#include <stdio.h>

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
    Produto produtos[3] = {
        {1, 100.0},
        {2, 250.0},
        {3, 80.0}
    };

    aplicar_desconto(&produtos[0], 10.0);
    aplicar_desconto(&produtos[1], 10.0);
    aplicar_desconto(&produtos[2], 10.0);

    imprimir_produtos(produtos, 3);

    return 0;
}
