#include <stdio.h>
// Desafio Batalha Naval - MateCheck

int main() {
        printf("Desafio Tabuleiro de Batalha Naval!\n");
    
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
        // 1. Criação do Tabuleiro (Matriz 10x10)
        int tabuleiro[10][10];
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                tabuleiro[i][j] = 0;
    
        // 2. Coordenadas dos navios
        int lh = 2, ch = 1; // horizontal
        int lv = 5, cv = 7; // vertical
        int tamanho = 3;
    
        // 3. Posicionamento do navio horizontal
        if (ch + tamanho <= 10)
            for (int i = 0; i < tamanho; i++)
                tabuleiro[lh][ch + i] = 3;
    
        // 4. Posicionamento do navio vertical
        if (lv + tamanho <= 10) {
            int ok = 1;
            for (int i = 0; i < tamanho; i++)
                if (tabuleiro[lv + i][cv] != 0) ok = 0;
            if (ok)
                for (int i = 0; i < tamanho; i++)
                    tabuleiro[lv + i][cv] = 3;
        }
    
        // 5. Impressão do cabeçalho das colunas
        printf("   ");
        for (int i = 0; i < 10; i++)
            printf("%c ", linha[i]);
        printf("\n");
    
        // 6. Impressão das linhas do tabuleiro com numeração
        for (int i = 0; i < 10; i++) {
            printf("%2d ", i + 1);
            for (int j = 0; j < 10; j++)
                printf("%d ", tabuleiro[i][j]);
            printf("\n");
        }
    
        return 0;
    }