#include <stdio.h>
// Nível Aventureiro

int main()
{
    // matriz do tabuleiro 10x10
    int tabuleiro[10][10];    
    // array do primeiro navio com o valor 3 em todas as posições
    int navio1[3] = {3, 3, 3}; 
    int navio2[3] = {3, 3, 3}; 
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};
    // posições de cada navio
    int linhaNavio1 = 1, colunaNavio1 = 6;
    int linhaNavio2 = 4, colunaNavio2 = 0; 
    int linhaNavio3 = 2, colunaNavio3 = 7;
    int linhaNavio4 = 7, colunaNavio4 = 4;
    // validação de sobreposição
    int sobreposicao = 0;

    // inicialização do tabuleiro com o valor 0 (água) em todas as posições
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // valida se as posições já não estão ocupadas para inserir o primeiro navio

    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaNavio1][colunaNavio1 + i] == 3) // se a condição for verdadeira, a posição já está ocupada
        {
            sobreposicao = 1;
        }
    }

    // posiciona o primeiro navio horizontalmente

    if (linhaNavio1 >= 0 && linhaNavio1 < 10 && 
        colunaNavio1 >= 0 && colunaNavio1 + 2 < 10 && 
        sobreposicao == 0) // valida se as coordenadas não são maiores que a matriz e valida posição
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i]; 
        }
    }

    // valida se as posições já não estão ocupadas para inserir o segundo navio

    sobreposicao = 0;
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaNavio2 + i][colunaNavio2] == 3) // se a condição for verdadeira, a posição já está ocupada
        {
            sobreposicao = 1;
        }
    }

    // posicionando o segundo navio verticalmente no tabuleiro

    if (linhaNavio2 >= 0 && linhaNavio2 + 2 < 10 && 
        colunaNavio2 >= 0 && colunaNavio2 < 10 && 
        sobreposicao == 0) // valida se as coordenadas não são maiores que a matriz
    {
        for (int i = 0; i < 3; i++) // posiciona o navio verticalmente
        {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
        }
    }

    // valida se as posições já não estão ocupadas para inserir o terceiro navio
    sobreposicao = 0;
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaNavio3 + i][colunaNavio3 + i] == 3) // se a condição for verdadeira, a posição já está ocupada
        {
            sobreposicao = 1;
        }
    }

    // posicionando o terceiro navio diagonalmente no tabuleiro

    if (linhaNavio3 >= 0 && linhaNavio3 + 2 < 10 && 
        colunaNavio3 >= 0 && colunaNavio3 + 2 < 10 && 
        sobreposicao == 0) // valida se as coordenadas não são maiores que a matriz
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = navio3[i];
        }
    }

    // valida se as posições já não estão ocupadas para inserir o quarto navio
    sobreposicao = 0;
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linhaNavio4 + i][colunaNavio4 - i] == 3) // se a condição for verdadeira, a posição já está ocupada
        {
            sobreposicao = 1;
        }
    }

    // posicionando o quarto navio diagonalmente no tabuleiro

    if (linhaNavio4 >= 0 && linhaNavio4 + 2 < 10 && 
        colunaNavio4 - 2 >= 0 && colunaNavio4 < 10 &&
        sobreposicao == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = navio4[i];
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