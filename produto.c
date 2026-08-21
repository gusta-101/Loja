#include "produto.h"

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
//addproduto
produto adcionar_produto(int id) {
    produto add;
    add.id = id;

    

    printf("Nome do produto: ");
    limpar_buffer();
    if (fgets(add.nome, sizeof(add.nome), stdin) != NULL) {
        add.nome[strcspn(add.nome, "\n")] = '\0';
    }

    printf("Insira o preco unitario do produto: ");
    scanf("%f", &add.preco);

    printf("Quantidade atual: ");
    scanf("%d", &add.quantidade);

    printf("\nId do produto: %d\n", add.id);
    
    printf("\n===============================\nProduto adicionado com sucesso!\n===============================\n");
    return add;
}

//rmvporId(armazenamento, &total, IdASerRemovido);
void rmvporId(produto *produtos, int *total, int IdASerRemovido) {
        if(*total==0){
        printf("\nO estoque esta vazio!!\n");
        return;
    }

    for(int i=0;i<*total;i++){
    if(produtos[i].id==IdASerRemovido){
        for(int j=i;j<*total-1;j++){
            produtos[j]=produtos[j+1];
            }        
            printf("\-------------------------------\nProduto Removido com sucesso!\n-------------------------------\n");
                     
            (*total)--;
        return;
    }
        printf("\nProduto não encontrado.\nCancelando a operacao... \n");
        return;

    }
    
    
    
    
}