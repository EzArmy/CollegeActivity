#include <stdio.h>

int main()
{
    // Criando um jogo da velha

    char Player1, Player2;

    char tabuleiro[3][3];

    printf("JOGADOR 1 escolha entre X ou O\n");
    scanf("%c", &Player1);
    printf("%c\n", Player1);

    switch (Player1)
    {
    case 'X':

        Player2 = 'O';
        printf("JOGADOR 1 será o X\n");
        printf("JOGADOR 2 será o O\n");


    break;

    case 'O':
        Player2 = 'X';
        printf("JOGADOR 1 será o O\n");
        printf("JOGADOR 2 será o X\n");
    break;

    default:
        printf("Escolha uma opção válida\n");
    return 1;
    }

    printf("  1 2 3\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d _\n", i+1);
        for(int j = 0; j < 3; j++)
        {
            if(tabuleiro[i][j] == '')
            {
                printf("")
            }
        }
    }

    return 0;
}
