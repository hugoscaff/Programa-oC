#include <stdio.h>

// Definição da estrutura para representar uma carta do Super Trunfo
struct CartaSuperTrunfo {
    char estado;
    char codigo_carta[4]; // Ex: "A01"
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas variáveis do tipo struct para armazenar os dados das cartas
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    printf("--- Cadastro da Primeira Carta ---\n");

    // Lendo os dados da primeira carta do usuário
    printf("\nDigite o Estado (uma letra de 'A' a 'H'):\n ");
    scanf(" %c", &carta1.estado);

    printf("\nDigite o Código da Carta (ex: A01): \n");
    scanf("%s", carta1.codigo_carta);

    printf("\nDigite o Nome da Cidade:\n ");
    scanf(" %s", carta1.nome_cidade);

    printf("\nDigite a População:\n ");
    scanf(" %d", &carta1.populacao);

    printf("\nDigite a Área (em km²):\n ");
    scanf("%f", &carta1.area);

    printf("\nDigite o PIB (em bilhões de reais):\n ");
    scanf("%f", &carta1.pib);

    printf("\nDigite o Número de Pontos Turísticos: \n");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n--- Cadastro da Segunda Carta ---\n");

    // Lendo os dados da segunda carta do usuário
    printf("\nDigite o Estado (uma letra de 'A' a 'H'):\n ");
    scanf(" %c", &carta2.estado);

    printf("\nDigite o Código da Carta (ex: B02):\n ");
    scanf("%s", carta2.codigo_carta);

    printf("\nDigite o Nome da Cidade:\n ");
    scanf(" %s", carta2.nome_cidade);

    printf("\nDigite a População:\n ");
    scanf("%d", &carta2.populacao);

    printf("\nDigite a Área (em km²):\n ");
    scanf("%f", &carta2.area);

    printf("\nDigite o PIB (em bilhões de reais):\n ");
    scanf("%f", &carta2.pib);

    printf("\nDigite o Número de Pontos Turísticos:\n ");
    scanf("%d", &carta2.pontos_turisticos);

    // --- Exibição dos Dados ---
    printf("\n===================================\n");
    printf("--- Cartas Cadastradas ---\n");
    printf("===================================\n");

    // Exibindo os dados da primeira carta de forma organizada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n-----------------------------------\n");

    // Exibindo os dados da segunda carta de forma organizada
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
