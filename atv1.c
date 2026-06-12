#include <stdio.h>

int main() {
    float preco = 100.0;
    float *ponteiro_preco;

    ponteiro_preco = &preco;

    *ponteiro_preco = *ponteiro_preco + (*ponteiro_preco * 0.10);

    printf("Preco atualizado: R$ %.2f\n", preco);

    return 0;
}
