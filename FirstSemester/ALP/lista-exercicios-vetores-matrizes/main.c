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
    /*
    char type[3][20] = {"Unitário", "Duplo", "10 Viagens"};
    float price[3] = {1.30, 2.60, 12.00}, pagamento = 0.00;
    int escolhido = 0;

    printf("Qual passagems pretende comprar?\n");
    printf("------------------------------\n");
    printf("|   1:%s: %.2f         |\n",type[0], price[0]);
    printf("|   2:%s: %.2f            |\n",type[1], price[1]);
    printf("|   3:%s: %.2f      |\n",type[2], price[2]);
    printf("------------------------------\n");

    printf("Escolha sua passagem:\n");
    scanf("%d", &escolhido);
    printf("Quanto crédito você tem para as passagens?\n");
    scanf("%f", &pagamento);

    switch(escolhido)
    {
        case 1:

            if(pagamento > price[0])
            {
                int quantidade = pagamento/price[0];
                float troco = pagamento - quantidade*price[0];
                printf("Você pode comprar %d unitário\n", quantidade);
                printf("Seu troco será: R$ %.2f", troco);
            }

        break;

        case 2:

            if(pagamento > price[1])
            {
                int quantidade = pagamento/price[1];
                float troco = pagamento - quantidade*price[1];
                printf("Você pode comprar %d Duplo\n", quantidade);
                printf("Seu troco será: R$ %.2f", troco);
            }

        break;

        case 3:

            if(pagamento > price[2])
            {
                int quantidade = pagamento/price[2];
                float troco = pagamento - quantidade*price[2];
                printf("Você pode comprar %d 10 Viagens\n", quantidade);
                printf("Seu troco será: R$ %.2f", troco);
            }

        break;

        default:
            printf("Passagem inválida");
        break;
    }
    */

    //Ex 5
    /*
    int Vetor[12] = {1,2,3,4,5,6,7,8,9,10,11,12}, X = 0, Y = 0;

    printf("Faça a soma dos números do array:\n");
    printf("Escolha a posição X:\n");
    scanf("%d", &X);
    printf("Escolha a posição Y:\n");
    scanf("%d", &Y);

    printf("A soma das posições X:%d e Y:%d\n", X, Y);
    printf("%d\n", Vetor[X]+Vetor[Y]);
    */

    //Ex 6
    /*
    int Vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, X;
    printf("Qual Valor está procurando?: \n");
    scanf("%d", &X);

    for(int i = 0; i <= 20; i++)
    {
        if(Vetor[i] == X)
        {
            printf("O VALOR PROCURADO ESTÁ NO ARRAY\n");
            printf("Valor: %d\n", X);
            printf("Posição: %d\n", i);
        }
    }

    if(X < 20 || X < 1)
    {
       printf("Valor inválido");
    }
    */

    //Ex 7
    /*
    char Vetor[20];
    char Vogais[10] = {'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    int CountV = 0, CountC = 0;

    printf("Escreva uma palavra: \n");
    fgets(Vetor, sizeof(Vetor), stdin);

    printf("Cada letra da palavra: \n");
    for(int i = 0; i < strlen(Vetor); i++)
    {
        if(isalpha(Vetor[i])) {
            int ehVogal = 0;
            for(int j = 0; j < 10; j++) {
                if (Vetor[i] == Vogais[j]) {
                    ehVogal = 1;
                    CountV += 1;
                    break;
                }
            }

            if (!ehVogal) {
                CountC += 1;
            }
        }
    }

    printf("O total de Vogais é: %d\n", CountV);
    printf("O total de Consoantes é: %d\n", CountC);
    */

    //Ex 8
    /*
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho deve ser maior que zero.\n");
        return 1;
    }

    char Vetor[tamanho];

    printf("Digite a string: ");
    scanf(" %[^\n]s", Vetor);
    int i, j;
    char temp;
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = Vetor[i];
        Vetor[i] = Vetor[j];
        Vetor[j] = temp;
    }

    printf("String invertida: %s\n", Vetor);
    */

    //Ex 9
    /*
    int matriz[3][3];
    int soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Matriz inserida:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A soma dos elementos da matriz é: %d\n", soma);
    */

    //Ex 10
    /*
    int N;
    printf("Digite o tamanho da matriz (N x N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Tamanho inválido. O tamanho deve ser maior que zero.\n");
        return 1;
    }

    int matriz[N][N];
    int valorProcurado;

    printf("Digite os elementos da matriz %dx%d:\n", N, N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor para procurar na matriz: ");
    scanf("%d", &valorProcurado);

    int encontrado = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] == valorProcurado) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        printf("Valor encontrado.\n");
    } else {
        printf("Valor não encontrado.\n");
    }
    */

    return 0;
}
