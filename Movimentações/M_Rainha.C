#include <stdio.h>

int main()
{

    int i = 1, opcao;
    char direcao;

    do
    {
        if (opcao >= 6)
        {
            printf("Número inválido. Digite um número entre 0 e 5!\n");
        }

        printf("1. CIMA\n");
        printf("2. BAIXO\n");
        printf("3. ESQUERDA\n");
        printf("4. DIREITA\n");
        printf("5. Sair\n");
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
                for (i = 1; i <= 8; i++)
                {
                    printf("CIMA\n", i);
                }
                break;
            case 'b':
                while (i <= 5)
                {
                    printf("CIMA, DIREITA \n", i);
                    i++;
                }
                break;
            case 'c':
                while (i <= 5)
                {
                    printf("CIMA, ESQUERDA \n", i);
                    i++;
                }
                break;
            }
            break;
        case 2:
            printf("d. BAIXO\n");
            printf("e. BAIXO, DIREITA\n");
            printf("f. BAIXO, ESQUERDA\n");
            printf("Escolha a direção:\n");
            scanf("%d", &opcao);
            scanf(" %c", &direcao);
            switch (direcao)
            {
            case 'd':
                for (i = 1; i <= 8; i++)
                {
                    printf("BAIXO\n", i);
                }
                break;

            case 'e':
                while (i <= 5)
                {
                    printf("BAIXO, DIREITA \n", i);
                    i++;
                }
                break;
            case 'f':
                while (i <= 5)
                {
                    printf("BAIXO, ESQUERDA \n", i);
                    i++;
                }
                break;
            }

            break;
        case 3:
            for (i = 1; i <= 5; i++)
            {
                printf("ESQUERDA\n", i);
            }
            break;
        case 4:
            for (i = 1; i <= 5; i++)
            {
                printf("DIREITA\n", i);
            }
        default:

            break;
        }
    } while (opcao != 0);
}
