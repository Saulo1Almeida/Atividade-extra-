#include <stdio.h>

void aplicar_desconto(float *preco, float percentual) {
    *preco = *preco - (*preco * percentual / 100);
}

int main() {
    float preco = 100.0;
    float desconto = 10.0;

    aplicar_desconto(&preco, desconto);

    printf("Preco com desconto: R$ %.2f\n", preco);

    return 0;
}
