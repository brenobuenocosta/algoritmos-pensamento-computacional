#include <stdio.h>

#define N 10

int main() {
    /* Vetor com as reproducoes simuladas de 10 musicas de um artista */
    int reproducoes[N] = {152300, 87450, 245800, 63200, 198700,
                          120450, 310900, 45600, 176300, 98100};
    int original[N];
    int i, j, aux;

    /* Guarda uma copia para reordenar do zero na ordem decrescente */
    for (i = 0; i < N; i++) {
        original[i] = reproducoes[i];
    }

    /* Exibe os dados originais (sem ordenar) */
    printf("=== DADOS ORIGINAIS (sem ordenar) ===\n");
    for (i = 0; i < N; i++) {
        printf("Musica %2d: %7d reproducoes\n", i + 1, reproducoes[i]);
    }

    /* Bubble Sort - ordem crescente */
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (reproducoes[j] > reproducoes[j + 1]) {   /* fora de ordem: troca */
                aux = reproducoes[j];
                reproducoes[j] = reproducoes[j + 1];
                reproducoes[j + 1] = aux;
            }
        }
    }

    printf("\n=== ORDEM CRESCENTE (menos ouvida -> mais ouvida) ===\n");
    for (i = 0; i < N; i++) {
        printf("%2d. %7d reproducoes\n", i + 1, reproducoes[i]);
    }

    /* Bubble Sort - ordem decrescente (comparacao invertida) */
    for (i = 0; i < N; i++) {
        reproducoes[i] = original[i];
    }
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (reproducoes[j] < reproducoes[j + 1]) {   /* inverte o criterio */
                aux = reproducoes[j];
                reproducoes[j] = reproducoes[j + 1];
                reproducoes[j + 1] = aux;
            }
        }
    }

    printf("\n=== ORDEM DECRESCENTE (mais ouvida -> menos ouvida) ===\n");
    for (i = 0; i < N; i++) {
        printf("%2d. %7d reproducoes\n", i + 1, reproducoes[i]);
    }

    return 0;
}
