#include <stdio.h>
#include <string.h>

int main() {
    // --- Dados das Cartas (pré-definidos) ---
    // Carta 1
    char estado1[3] = "SP";
    char codigo1[10] = "SP-01";
    char nomeCidade1[50] = "Sao Paulo";
    long populacao1 = 12300000;
    double area1 = 1521.11;
    double pib1 = 688.5; // em bilhoes de dolares
    int pontosTuristicos1 = 100;

    // Carta 2
    char estado2[3] = "RJ";
    char codigo2[10] = "RJ-01";
    char nomeCidade2[50] = "Rio de Janeiro";
    long populacao2 = 6700000;
    double area2 = 1200.25;
    double pib2 = 345.5; // em bilhoes de dolares
    int pontosTuristicos2 = 80;

    // --- Calculo dos Atributos Derivados ---
    double densidadePopulacional1 = populacao1 / area1;
    double pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para dolares

    double densidadePopulacional2 = populacao2 / area2;
    double pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para dolares

    // --- Escolha do Atributo para Comparacao ---
    // Você pode alterar esta variavel para comparar outro atributo
    // 1 = Populacao
    // 2 = Area
    // 3 = PIB
    // 4 = Densidade Populacional
    // 5 = PIB per capita
    int atributoEscolhido = 1;

    // --- Lógica de Comparação e Exibição do Resultado ---
    printf("--- Comparacao de Cartas ---\n");

    // Comparacao baseada na Populacao
    if (atributoEscolhido == 1) {
        printf("Atributo: Populacao\n\n");
        printf("Carta 1 - %s (%s): %ld\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %ld\n", nomeCidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }
    // Comparacao baseada na Area
    else if (atributoEscolhido == 2) {
        printf("Atributo: Area\n\n");
        printf("Carta 1 - %s (%s): %.2f km2\n", nomeCidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km2\n", nomeCidade2, estado2, area2);
        
        if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }
    // Comparacao baseada no PIB
    else if (atributoEscolhido == 3) {
        printf("Atributo: PIB\n\n");
        printf("Carta 1 - %s (%s): %.2f bilhoes\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhoes\n", nomeCidade2, estado2, pib2);
        
        if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }
    // Comparacao baseada na Densidade Populacional (menor valor vence)
    else if (atributoEscolhido == 4) {
        printf("Atributo: Densidade Populacional\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km2\n", nomeCidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km2\n", nomeCidade2, estado2, densidadePopulacional2);
        
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }
    // Comparacao baseada no PIB per Capita
    else if (atributoEscolhido == 5) {
        printf("Atributo: PIB per Capita\n\n");
        printf("Carta 1 - %s (%s): R$ %.2f\n", nomeCidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", nomeCidade2, estado2, pibPerCapita2);
        
        if (pibPerCapita1 > pibPerCapita2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    } else {
        printf("Atributo de comparacao invalido.\n");
    }

    return 0;
}
