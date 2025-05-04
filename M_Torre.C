#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {        
//////////////// TORRE /////////////////

        int i, opcao;

        printf("1. DIREITA\n");
        printf("2. ESQUERDA\n");
        printf("3. CIMA\n");
        printf("4. BAIXO\n");
        printf("Escolha a direção:\n");
        scanf("%d", &opcao);


        switch (opcao)
        {
        case 1:
            for (i = 1; i <=5; i++)
        {
            printf("DIREITA\n",i);
        }
            break;
        case 2:
            for (i = 1; i <=5; i++)
        {
            printf("ESQUERDA\n",i);
        }
            break;
        case 3:
            for (i = 1; i <=5; i++)
        {
            printf("CIMA\n",i);
        }
            break;
        case 4:
            for (i = 1; i <=5; i++)
        {
            printf("BAIXO\n",i);
        }
            break;
        default:
            printf("Opção inválida.");
            break;
        }
        
//////////////// TORRE /////////////////
}





























    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

