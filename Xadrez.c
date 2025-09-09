#include <stdio.h>

int main() {
    // --- Movimento da Torre (usando for) ---
    // A Torre se move 5 casas para a direita.
    // Usamos um loop 'for' para simular a movimentação.
    printf("--- Movimento da Torre ---\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimento do Bispo (usando while) ---
    // O Bispo se move 5 casas na diagonal para cima e para a direita.
    // Usamos um loop 'while' para simular a movimentação.
    printf("--- Movimento do Bispo ---\n");
    int casas_bispo = 5;
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--;
    }
    printf("\n");

    // --- Movimento da Rainha (usando do-while) ---
    // A Rainha se move 8 casas para a esquerda.
    // Usamos um loop 'do-while' para simular a movimentação.
    printf("--- Movimento da Rainha ---\n");
    int casas_rainha = 8;
    do {
        printf("Esquerda\n");
        casas_rainha--;
    } while (casas_rainha > 0);
    printf("\n");

    return 0;
}
