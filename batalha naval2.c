#include <stdio.h>

// Definição do Tabuleiro
#define TAM 10       

// Definição do Navio
#define TAM_NAVIO 3  

int main() {
    int tabuleiro[TAM][TAM];
    int navio1[TAM_NAVIO]; // 1º Navio - horizontal 
    int navio2[TAM_NAVIO]; // 2º navio - vertical

    // Inicio do tabuleiro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Criação dos navios
    for (int i = 0; i < TAM_NAVIO; i++) {
        navio1[i] = 3;
        navio2[i] = 3;
    }

    // Coordenadas dos navios
    int linha1 = 2, coluna1 = 4; // navio - horizontal
    int linha2 = 5, coluna2 = 7; // navio - vertical

    // Posicão  do navio 1 - horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha1][coluna1 + i] = navio1[i];
    }

    // Posicião do navio 2 - vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    // Imprimir o jogo
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
