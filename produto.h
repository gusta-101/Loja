#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[100];
    float preco;
    int quantidade;
}addproduto;

typedef struct{
    float quantidadetotal;
}estoquetotal;

addproduto adcionar_produto(int id);
