#include "produto.h"

int main() {
    int user = 0;
    int total = 0;
    int capacidade = 0;
    int id = 1;

    addproduto *armazenamento = NULL;
        printf("-----------------------------------\n");
        printf("Bem vindo ao catalogo Dream Market!\n");
        printf("-----------------------------------\n\n");
    while (user != 7) {
        
        printf("Escolha a opcao que voce quer fazer:\nDigite...\n");
        printf("1 - Cadastrar produto \n");
        printf("2 - Remover produto por id \n");
        printf("3 - Listar todos os produtos \n");
        printf("4 - Buscar produto por id \n");
        printf("5 - Ordenar produtos por preco \n");
        printf("6 - Calcular o valor total do estoque \n");
        printf("7 - Encerrar o programa \n");
        scanf("%d", &user);

        switch (user) {
            case 1: {
                if (total == capacidade) {
                    int novacap = (capacidade == 0) ? 2 : capacidade * 2;
                    addproduto *temp = realloc(armazenamento, novacap * sizeof(addproduto));

                    if (temp == NULL) {
                        printf("Erro: Falha na alocacao de memoria!\n");
                        return 1;
                        break;
                    }

                    armazenamento = temp;
                    capacidade = novacap;
                }

                armazenamento[total] = adcionar_produto(id);
                total++;
                id++;
                break;
            }

            case 2:
                /* code */
                break;

            case 3:
                /* code */
                break;

            case 4:
                /* code */
                break;

            case 5:
                /* code */
                break;

            case 6:
                /* code */
                break;

            case 7:
                if (armazenamento != NULL) {
                    free(armazenamento);
                    armazenamento = NULL;
                }
                printf("Memoria liberada. Encerrando o sistema...\n");
                break;

            default:
                printf("Comando invalido!! \nPor favor, tente novamente\n");
                break;
        }
    }

    return 0;
}