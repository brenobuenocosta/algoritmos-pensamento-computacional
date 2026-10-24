#include <stdio.h>

#define DIAS 7

int main() {
    /* Matriz de texto: nome de cada dia da semana (ate 9 letras + fim de texto) */
    char dias[DIAS][10] = {"Domingo", "Segunda", "Terca", "Quarta",
                           "Quinta", "Sexta", "Sabado"};
    int carros[DIAS];   /* Vetor: carros que passaram em cada dia */
    int total = 0;      /* Soma de carros da semana */
    int diaPico = 0;    /* Indice do dia com maior movimento */
    float media;
    int i;

    printf("========================================\n");
    printf("      CONTROLE DE PEDAGIO - SEMANAL\n");
    printf("========================================\n");
    printf("Informe a quantidade de carros por dia.\n\n");

    /* Leitura: um unico laco preenche o vetor dos 7 dias */
    for (i = 0; i < DIAS; i++) {
        do {
            printf("Carros (%s): ", dias[i]);
            scanf("%d", &carros[i]);
            if (carros[i] < 0) {
                printf("Valor invalido! Digite um numero maior ou igual a 0.\n");
            }
        } while (carros[i] < 0);

        /* Processamento: soma e busca do dia de pico */
        total += carros[i];
        if (carros[i] > carros[diaPico]) {
            diaPico = i;
        }
    }

    media = (float) total / DIAS;

    /* Exibicao: tabela formatada, com destaque (negrito + cor) no dia de pico */
    printf("\n========================================\n");
    printf("            RESULTADO DA SEMANA\n");
    printf("========================================\n");
    printf("%-10s | %s\n", "Dia", "Carros");
    printf("----------------------------------------\n");

    for (i = 0; i < DIAS; i++) {
        if (i == diaPico) {
            /* \033[1;31m = negrito vermelho; \033[0m = volta ao normal */
            printf("\033[1;31m%-10s | %6d  <- PICO\033[0m\n", dias[i], carros[i]);
        } else {
            printf("%-10s | %6d\n", dias[i], carros[i]);
        }
    }

    printf("----------------------------------------\n");
    printf("Total da semana: %d carros\n", total);
    printf("Media diaria:    %.2f carros\n", media);
    printf("Dia de pico:     %s (%d carros)\n", dias[diaPico], carros[diaPico]);
    printf("========================================\n");

    return 0;
}
