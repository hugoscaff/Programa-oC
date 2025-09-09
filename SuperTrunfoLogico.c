#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para as duas cartas
    char nomePais1[50];
    long populacao1;
    double area1, pib1;

    char nomePais2[50];
    long populacao2;
    double area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do pais: ");
    scanf("%s", nomePais1);
    printf("Digite a populacao: ");
    scanf("%ld", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%lf", &area1);
    printf("Digite o PIB (em trilhoes de dolares): ");
    scanf("%lf", &pib1);
    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do pais: ");
    scanf("%s", nomePais2);
    printf("Digite a populacao: ");
    scanf("%ld", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%lf", &area2);
    printf("Digite o PIB (em trilhoes de dolares): ");
    scanf("%lf", &pib2);
    printf("\n");

    // --- Comparacao das Cartas (Exemplo usando populacao) ---
    printf("--- Comparacao --- \n");
    printf("Comparando populacao...\n");

    if (populacao1 > populacao2) {
        printf("A carta 1 (%s) tem a maior populacao!\n", nomePais1);
    } else if (populacao2 > populacao1) {
        printf("A carta 2 (%s) tem a maior populacao!\n", nomePais2);
    } else {
        printf("Ambos os paises tem a mesma populacao.\n");
    }

    return 0;
}
