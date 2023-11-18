#include <stdio.h>
#include <stdlib.h>

int main()
{

    int row = 0, col = 0, soma = 0;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &row);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &col);

    int matriz [row][col];

    for (int i = 0; i<row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            //printf("%d|", matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("%d", soma);

    return 0;
}
