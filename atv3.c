#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco = produto->preco - (produto->preco * percentual / 100);
}

int main() {
    Produto produto;

    produto.id = 1;
    produto.preco = 100.0;

    aplicar_desconto(&produto, 10.0);

    printf("ID: %d\n", produto.id);
    printf("Preco com desconto: R$ %.2f\n", produto.preco);

    return 0;
}
