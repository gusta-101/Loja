#ifndef PRODUTO_H
#define PRODUTO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct produto
{
    char nome[100];
    int id;
    float preco;
    int quantidade;
} produto;

typedef struct {
    produto *vetor;         /* Ponteiro para o array dinâmico de produtos */
    int quantidade_atual;   /* Número de produtos atualmente cadastrados */
    int capacidade_maxima;  /* Capacidade atual alocada na memória para o vetor [3] */
} Estoque;

void exibir_produto (produto p);

int inicializarEstoque(Estoque *estoque, int capacidade_inicial);

// 1. Cadastrar produto (aloca/redimensiona e insere)
int cadastrar_produto(Estoque *estoque, produto novo_produto);

// 2. Remover produto por id (remove e reorganiza)
int remover_produto(Estoque *estoque, int id_busca);

// 3. Listar todos os produtos (Obrigatoriamente RECURSIVA)
void listar_produtos_recursivo(Estoque *estoque, int indice);

// 4. Buscar produto por id (Obrigatoriamente RECURSIVA - requer vetor ordenado)
int buscar_produto_recursivo(Estoque *estoque, int id_busca, int indice);

// 5. Ordenar produtos por preço 
void ordenar_por_preco(Estoque *estoque);

// 6. Calcular valor total do estoque (Obrigatoriamente RECURSIVA)
float calcular_total_recursivo(Estoque *estoque, int indice);

// 7. Encerrar o programa (liberar memória com free)
void liberar_estoque(Estoque *estoque);

#endif  