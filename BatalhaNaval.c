#include <stdio.h>

// Definição das constantes para o tabuleiro e os navios
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Representação dos elementos do tabuleiro
#define AGUA 0
#define NAVIO 3

// Protótipo da função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);

int main() {
    // 1. Representar o Tabuleiro: Matriz 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com 0s (água)
    // Loops aninhados para percorrer a matriz
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Posicionar os Navios
    // Coordenadas iniciais dos navios (predefinidas no código)
    int linhaNavio1 = 2; // Linha inicial do primeiro navio
    int colunaNavio1 = 1; // Coluna inicial do primeiro navio (horizontal)

    int linhaNavio2 = 5; // Linha inicial do segundo navio
    int colunaNavio2 = 6; // Coluna inicial do segundo navio (vertical)

    // Validação de posicionamento:
    // Garante que os navios cabem no tabuleiro e não se sobrepõem
    // Neste exemplo simplificado, as coordenadas são escolhidas para não haver sobreposição.
    

    // Posiciona o primeiro navio (horizontal)
    // O navio ocupa 3 posições a partir da coluna inicial
    if (colunaNavio1 + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = NAVIO;
        }
    } else {
        printf("Erro: O primeiro navio (horizontal) excede os limites do tabuleiro.\n");
    }

    // Posiciona o segundo navio (vertical)
    // O navio ocupa 3 posições a partir da linha inicial
    if (linhaNavio2 + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = NAVIO;
        }
    } else {
        printf("Erro: O segundo navio (vertical) excede os limites do tabuleiro.\n");
    }

    // 3. Exibir o Tabuleiro
    printf("Tabuleiro de Batalha Naval - Navios Posicionados:\n\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}

/**
 * @brief Exibe o tabuleiro no console, mostrando a posição da água e dos navios.
 * @param tabuleiro A matriz 10x10 que representa o tabuleiro do jogo.
 */
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Cabeçalho das colunas
    printf("  ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Exibe o conteúdo do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Cabeçalho das linhas
        printf("%d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
