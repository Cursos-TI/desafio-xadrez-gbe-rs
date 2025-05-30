#include <stdio.h>

/// Função recursiva para simular o movimento da Torre (Direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

/// Função recursiva para simular o movimento da Rainha (Esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

/// Função recursiva que simula o movimento diagonal do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

/// Função que simula o movimento do Bispo com loops aninhados
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com loops aninhados:\n");
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

/// Função que simula o movimento complexo do Cavalo (2 cima, 1 direita) com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    
    int movimentos = 1;  // Número de movimentos em "L"
    
    for (int m = 0; m < movimentos; m++) {
        int casasCima = 0;

        // Primeira parte: duas casas para cima
        while (casasCima < 2) {
            if (casasCima == 1) {
                // Condição de exemplo: pule a primeira casa se necessário
                casasCima++;
                continue;
            }
            printf("Cima\n");
            casasCima++;
        }

        // Segunda parte: uma casa para a direita
        for (int i = 0; i < 1; i++) {
            if (i == 0) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    // Movimento da Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo com recursividade
    printf("\nMovimento do Bispo com recursividade:\n");
    moverBispoRecursivo(5);

    // Movimento do Bispo com loops aninhados
    moverBispoComLoops(5);

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo com loops complexos
    moverCavalo();

    return 0;
}
