#include "produto.h"
int main(){
    int user=0;
    while (user!=7)
    {
        printf("-----------------------------------\n");
        printf("Bem vindo ao catalogo Dream Market!\n");
        printf("-----------------------------------\n");
        printf("\nEscolha a opcao que voce fazer:\nDigite...\n");
        printf("1 - Cadastrar produto \n"); // aloca (ou redimensiona) o vetor dinâmico e insere um novo produto
        printf("2 - Remover produto por id \n"); // remove o produto do vetor e reorganiza os elementos restantes.
        printf("3 - Listar todos os produtos \n");// implementada com uma função recursiva (sem uso de laço for/while para percorrer o vetor nesta função específica)
        printf("4 - Buscar produto por id \n");//implementada com busca recursiva (o vetor deve estar ordenado por id para essa operação).
        printf("5 - Ordenar produtos por preço \n");//implementada com um algoritmo de ordenação.
        printf("6 -  Calcular o valor total do estoque \n");//(soma de preco * quantidade de todos os produtos) — implementada com uma função recursiva de soma.implementada com um algoritmo de ordenação.
        printf("7 - encerrar o programa \n");// liberar corretamente toda a memória alocada
        scanf("%d",&user);


        switch (user)
        {
        case 1:
            /* code */
            break;
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
            /* code */
            break;
        default:
            printf("Comando invalido!! \nPorfavor, tente novamente\n");
            break;
        }
    }

    return 0;
    
}