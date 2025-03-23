#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Novato
// O objetivo é criar um sistema de movimentação de peças de xadrez.


int main() {

        // Definindo o número de casas a serem movidas
        const int torresMovimento = 5;
        const int bispoMovimento = 5;
        const int rainhaMovimento = 8;
    
        // Movimento da Torre: 5 casas para a direita
        // O comando for é utilizado para repetir um bloco de código várias vezes
        printf("Movimento da Torre:\n");
        for (int i = 0; i < torresMovimento; i++) {
            printf("Direita\n");
        }
    
        // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
        // O comando while é utilizado para repetir um bloco de código enquanto uma condição for verdadeira
        printf("\nMovimento do Bispo:\n");
        int j = 0;
        while (j < bispoMovimento) {
            printf("Cima, Direita\n");
            j++;
        }
    
        // Movimento da Rainha: 8 casas para a esquerda
        // O comando do while é utilizado para repetir um bloco de código enquanto uma condição for verdadeira
        printf("\nMovimento da Rainha:\n");
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < rainhaMovimento);

    return 0;
}
