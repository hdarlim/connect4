#include <stdio.h>
#include <stdlib.h>

#define LINHAS 6
#define COLUNAS 9

char tabuleiro[LINHAS][COLUNAS];

void criar_tabuleiro() {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '.';
        }
    }
}

void exibir_tabuleiro() {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int fim = 0;
    int contador = 0;
    char vencedor = ' ';

    criar_tabuleiro();
    exibir_tabuleiro();
    
    while (fim == 0) {
        int i = 0;
        int j = 0;

        printf("Digite a coluna: \n");
        scanf("%d", &j);

        while (j > COLUNAS - 1 || j < 0) {
            printf("Digite um numero valido: \n");
            scanf("%d", &j);
        }

        for (int i = LINHAS - 1; i >= 0; i--) {
            if (tabuleiro[i][j] == '.') {
                if (contador % 2 == 0) {
                    tabuleiro[i][j] = 'X';
                    contador++;
                    break;
                } else {
                    tabuleiro[i][j] = 'O';
                    contador++;
                    break;
                }
            }
        }

        for (int i = 3; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                if (tabuleiro[i][j] == 'X' && tabuleiro[i-1][j] == 'X' && tabuleiro[i-2][j] == 'X' && tabuleiro[i-3][j] == 'X') {
                    vencedor = 'X';
                    fim = 1;
                } else if (tabuleiro[i][j] == 'O' && tabuleiro[i-1][j] == 'O' && tabuleiro[i-2][j] == 'O' && tabuleiro[i-3][j] == 'O') {
                    vencedor = 'O';
                    fim = 1;
                }
            }
        }
                
        for (int i = 0; i < LINHAS; i++) {
            for (int j = 3; j < COLUNAS; j++) {
                if (tabuleiro[i][j] == 'X' && tabuleiro[i][j-1] == 'X' && tabuleiro[i][j-2] == 'X' && tabuleiro[i][j-3] == 'X') {
                    vencedor = 'X';
                    fim = 1;
                } else if (tabuleiro[i][j] == 'O' && tabuleiro[i][j-1] == 'O' && tabuleiro[i][j-2] == 'O' && tabuleiro[i][j-3] == 'O') {
                    vencedor = 'O';
                    fim = 1;
                }
            }
        }

        system("clear");
        exibir_tabuleiro();

        if (contador == LINHAS * COLUNAS) {
            printf("\nNao ha mais movimentos possiveis.\n");
            fim = 1;
        }
    }

    printf("Fim de jogo.\n");
    if (vencedor != ' ') {
        printf("Vencedor: %c\n", vencedor);
    } else {
        printf("Empate\n");
    }

    return 0;
}
