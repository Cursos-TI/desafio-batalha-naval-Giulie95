#include <stdio.h>
// Nível Novato

int main()
{
    int tabuleiro[10][10];       // matriz do tabuleiro 10x10
    int navio1[3] = {3, 3, 3};   // array do primeiro navio com o valor 3 em todas as posições
    int navio2[3] = {3, 3, 3};   // array do segundo navio com o valor 3 em todas as posições
    int linha1 = 1, coluna1 = 5; // coordenadas do primeiro navio
    int linha2 = 3, coluna2 = 0; // coordenadas do segundo navio

    // inicialização do tabuleiro com o valor 0 em todas as posições
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // posicionando o primeiro navio horizontalmente no tabuleiro

    if (linha1 < 10 && coluna1 + 2 < 10) // valida se as coordenadas não são maiores que a matriz
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linha1][coluna1 + i] = navio1[i]; // posiciona o navio horizontalmente
        }
    }

    // posicionando o segundo navio verticalmente no tabuleiro

    if (linha2 + 2 < 10 && coluna2 < 10) // valida se as coordenadas não são maiores que a matriz
    {
        for (int i = 0; i < 3; i++) // posiciona o navio verticalmente
        {
            tabuleiro[linha2 + i][coluna2] = navio2[i];
        }
    }

    // identificação do jogo

    printf("### BATALHA NAVAL - TABULEIRO ### \n");
    printf("3 - navios\n");
    printf("0 - água \n\n");

    // mostra o tabuleiro com os navios posicionados
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}