#include <stdio.h>

int main()
{

    int movimentoCompleto = 1;
    char direcao;
    int opcao;

    do
    {
        if (opcao >= 4)
        {
            printf("Número inválido. Digite um número entre 1 e 3!\n");
        }

        printf("1. CIMA\n");
        printf("2. BAIXO\n");
        printf("3. Sair\n");
        printf("Escolha a direção:\n");
        scanf("%d", &opcao);
        scanf("%c", &direcao);

        switch (opcao)
        {
        case 1:
            printf("a. CIMA\n");
            printf("b. CIMA, DIREITA\n");
            printf("c. CIMA, ESQUERDA\n");
            printf("Escolha a direção:\n");
            scanf("%d", &opcao);
            scanf("%c", &direcao);
            switch (direcao)
            {
            case 'a':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("CIMA\n");
                    }
                }
                break;
            case 'b':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("CIMA\n");
                    }
                    printf("DIREITA\n");
                }
                break;
            case 'c':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("CIMA\n");
                    }
                    printf("ESQUERDA\n");
                }
                break;
            }
            break;
        case 2:
            printf("a. BAIXO\n");
            printf("b. BAIXO, DIREITA\n");
            printf("c. BAIXO, ESQUERDA\n");
            printf("Escolha a direção:\n");
            scanf("%d", &opcao);
            scanf("%c", &direcao);
            switch (direcao)
            {
            case 'a':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("BAIXO\n");
                    }
                }
                break;
            case 'b':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("BAIXO\n");
                    }
                    printf("DIREITA\n");
                }
                break;
            case 'c':
                movimentoCompleto = 1;
                while (movimentoCompleto--)
                {
                    for (int i = 1; i <= 2; i++)
                    {
                        printf("BAIXO\n");
                    }
                    printf("ESQUERDA\n");
                }
                break;
            }
        }
    } while (opcao != 3);
    return 0;
}