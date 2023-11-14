#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 1.

    int idade[7];
    float peso[7];
    int count;
    float media;

   for (int i = 0; i <= 1; i++)
   {
       printf("Insira sua idade?\n");
       scanf("%d", &idade[i]);
       printf("Qual seu peso?\n");
       scanf("%f", &peso[i]);
   }

    for(int j = 0; j < 1; j++)
    {
        if(peso[j] > 90.00)
        {
            count = + 1;

            printf("%d", count);

        }
    }

    printf("Ao todos são %d acima de 90 kilos", count);
    printf("A média de pessoas que participaram foram");

    return 0;
}
