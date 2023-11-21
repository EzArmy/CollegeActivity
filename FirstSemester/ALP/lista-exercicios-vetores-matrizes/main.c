#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 1.
    /*
    int idade[7];
    float peso[7];
    int count;
    float media = 0;

   for (int i = 0; i <= 7; i++)
   {
       printf("Insira sua idade?\n");
       scanf("%d", &idade[i]);
       printf("Qual seu peso?\n");
       scanf("%f", &peso[i]);
   }

    for(int j = 0; j < 7; j++)
    {
        if(peso[j] >= 90.00)
        {
            count = + 1;

            printf("%d", count);

        }
    }

    for(int i = 0; i < 7; i++)
    {
        media += idade[i];
    }

    printf("Ao todos são %d acima de 90 kilos\n", count);
    printf("A média da idade das pessoas que participaram é de %2.0f\n", media/7);
    */



    //Ex 2
    /*
    int idade[2], countA = 0, countB = 0;
    float peso[2], altura[2], media = 0;

    for(int i = 0; i < 2; i++)
    {
        printf("Qual sua idade?\n");
        scanf("%d", &idade[i]);

        printf("Qual seu peso?\n");
        scanf("%f", &peso[i]);

        printf("Qual sua altura?\n");
        scanf("%f", &altura[i]);
    }

    for(int i = 0; i < 2; i++)
    {
        if(peso[i] >= 90.00 && altura[i] <=1.50)
        {
            countA++;
        }

        if(idade[i] >= 10 && idade[i] <= 30)
        {
            countB += 1;
        }

        media += idade[i];
    }

    float porcentagemB = (float)countB / 2 * 100;

    printf("A media da idade das pessoas que responderam a pesquisa é de: %.0f\n", media/2);
    printf("A quantidade de pessoas pessoas com peso superior a 90kg e altura inferior a 1.50m é: %d\n", countA);
    printf("A porcentagem de pessoas com idade entre 10 a 30 anos é: %.2f",porcentagemB);
    */

    //Ex3
    /*
    char sex[4];
    int age[4];
    float media = 0, mediaM = 0, mediaF = 0;

    for(int i = 0; i < 4; i++)
    {
        printf("Qual seu sexo?(M/F)\n");
        scanf(" %c", &sex[i]);

        printf("Qual sua idade?\n");
        scanf("%d", &age[i]);

        media += age[i];

        if(sex[i] == 'M')
        {
            mediaM += age[i];
        }else if(sex[i] == 'F')
        {
            mediaF += age[i];
        }
    }

    printf("Média de idade das pessoas que participaram das pesquisas é: %.2f\n", media/4);
    printf("Média de idade das mulheres que participaram das pesquisas é: %.2f\n", mediaF/4);
    printf("Média de idade dos homens que participaram das pesquisas é: %.2f\n", mediaM/4);
    */

    //Ex 4
    char type[3][20] = {"Unitário", "Duplo", "10 Viagens"};
    float price[3] = {1.30, 2.60, 12.00};

    printf("Qual passagems pretende comprar?")


    return 0;
}
