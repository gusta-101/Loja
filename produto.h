#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct {
    int id;
    char nome[50];
    float preco;
    int quantidade;
} produto;


void rmvporId(produto *produtos, int *total, int IdASerRemovido);