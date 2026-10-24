#include <stdio.h>

int main() {
    int opcao, item;
    double total = 0.0;

    printf("========================================\n");
    printf("          CARDAPIO DIGITAL\n");
    printf("========================================\n");
    printf("Este sistema permite consultar o cardapio\n");
    printf("e montar o seu pedido de forma simples.\n");
    printf("\nOla! Seja bem-vindo(a). Esperamos que\n");
    printf("voce tenha uma otima refeicao!\n");
    printf("========================================\n");

    do {
        printf("\n--------------- MENU ---------------\n");
        printf("1 - Ver lanches\n");
        printf("2 - Ver bebidas\n");
        printf("3 - Ver sobremesas\n");
        printf("4 - Ver total parcial do pedido\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- LANCHES ---\n");
                printf("1. X-Burger ........ R$ 18,00\n");
                printf("2. X-Salada ........ R$ 20,00\n");
                printf("3. Misto quente .... R$ 12,00\n");
                printf("0. Voltar\n");
                printf("Escolha o item: ");
                scanf("%d", &item);
                if (item == 1) {
                    total += 18.00;
                    printf("X-Burger adicionado ao pedido.\n");
                } else if (item == 2) {
                    total += 20.00;
                    printf("X-Salada adicionado ao pedido.\n");
                } else if (item == 3) {
                    total += 12.00;
                    printf("Misto quente adicionado ao pedido.\n");
                } else if (item != 0) {
                    printf("Item invalido!\n");
                }
                break;
            case 2:
                printf("\n--- BEBIDAS ---\n");
                printf("1. Refrigerante .... R$ 6,00\n");
                printf("2. Suco natural .... R$ 8,00\n");
                printf("3. Agua ............ R$ 4,00\n");
                printf("0. Voltar\n");
                printf("Escolha o item: ");
                scanf("%d", &item);
                if (item == 1) {
                    total += 6.00;
                    printf("Refrigerante adicionado ao pedido.\n");
                } else if (item == 2) {
                    total += 8.00;
                    printf("Suco natural adicionado ao pedido.\n");
                } else if (item == 3) {
                    total += 4.00;
                    printf("Agua adicionada ao pedido.\n");
                } else if (item != 0) {
                    printf("Item invalido!\n");
                }
                break;
            case 3:
                printf("\n--- SOBREMESAS ---\n");
                printf("1. Pudim ........... R$ 9,00\n");
                printf("2. Sorvete ......... R$ 10,00\n");
                printf("0. Voltar\n");
                printf("Escolha o item: ");
                scanf("%d", &item);
                if (item == 1) {
                    total += 9.00;
                    printf("Pudim adicionado ao pedido.\n");
                } else if (item == 2) {
                    total += 10.00;
                    printf("Sorvete adicionado ao pedido.\n");
                } else if (item != 0) {
                    printf("Item invalido!\n");
                }
                break;
            case 4:
                printf("\nTotal parcial do pedido: R$ %.2f\n", total);
                break;
            case 0:
                printf("\nPedido finalizado. Total a pagar: R$ %.2f\n", total);
                break;
            default:
                printf("\nOpcao invalida! Digite um numero de 0 a 4.\n");
        }

    } while (opcao != 0);

    printf("\n========================================\n");
    printf("  Obrigado pela visita! Volte sempre.\n");
    printf("========================================\n");

    return 0;
}
