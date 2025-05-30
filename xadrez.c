#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
     printf("\nMovimento do Bispo:\n");
    int bispoPassos = 0;
    while (bispoPassos < 5) {
        printf("Cima Direita\n");
        bispoPassos++;
    }

    // Implementação de Movimentação da Torre
    // Movimento da Torre - 5 casas para a direita usando 'for'
    printf("Movimento da Torre:\n");
    for (int torrePassos = 0; torrePassos < 5; torrePassos++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
     printf("\nMovimento da Rainha:\n");
    int rainhaPassos = 0;
    do {
        printf("Esquerda\n");
        rainhaPassos++;
    } while (rainhaPassos < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
