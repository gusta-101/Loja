#include "produto.h"

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

produto adcionar_produto(int id) {
    produto add;
    add.id = id;

    printf("\nId inserido automaticamente: %d\n", add.id);

    printf("Nome do produto: ");
    limpar_buffer();
    if (fgets(add.nome, sizeof(add.nome), stdin) != NULL) {
        add.nome[strcspn(add.nome, "\n")] = '\0';
    }

    printf("Insira o preco unitario do produto: ");
    scanf("%f", &add.preco);

    printf("Quantidade atual: ");
    scanf("%d", &add.quantidade);

    printf("\n>> Produto adicionado com sucesso!\n");
    return add;
}