//////////////// Bispo /////////////////
#include <stdio.h>

int main () {

    int i, opcao;
        printf("1. CIMA\n");
        printf("2. BAIXO\n");
        printf("Escolha a direção:\n");
        scanf("%d", &opcao);

    switch (opcao)
        {
        case 1:
            printf("1. DIREITA\n");
            printf("2. ESQUERDA\n");
            printf("Escolha a direção:\n");
            scanf("%d", &opcao);
                switch (opcao)
                {
                case 1:
                    for (i = 1; i <=5; i++)
                {
                    printf("CIMA, DIREITA\n",i);
                }
                    break;
                case 2:
                    for (i = 1; i <=5; i++)
                {
                    printf("CIMA, ESQUERDA \n",i);
                }
                    break;
                default:
                    break;
                } 
        break;
        case 2:
            printf("1. DIREITA\n");
            printf("2. ESQUERDA\n");
            printf("Escolha a direção:\n");
            scanf("%d", &opcao);
                switch (opcao)
                {
                case 1:
                    for (i = 1; i <=5; i++)
                {
                    printf("BAIXO, DIREITA \n",i);
                }
                    break;
                case 2:
                    for (i = 1; i <=5; i++)
                {
                    printf("BAIXO, ESQUERDA \n",i);
                }
                    break;
                default:
                    break;
            }
        break;
        default:
            break;
        }
}






// int i, opcao;

//         printf("1. DIREITA\n");
//         printf("2. ESQUERDA\n");
//         printf("3. CIMA\n");
//         printf("4. BAIXO\n");
//         printf("Escolha a direção:\n");
//         scanf("%d", &opcao);


//         switch (opcao)
//         {
//         case 1:
//             for (i = 1; i <=5; i++)
//         {
//             printf("DIREITA\n",i);
//         }
//             break;
//         case 2:
//             for (i = 1; i <=5; i++)
//         {
//             printf("ESQUERDA\n",i);
//         }
//             break;
//         case 3:
//             for (i = 1; i <=5; i++)
//         {
//             printf("CIMA\n",i);
//         }
//             break;
//         case 4:
//             for (i = 1; i <=5; i++)
//         {
//             printf("BAIXO\n",i);
//         }
//             break;
//         default:
//             break;
//         }