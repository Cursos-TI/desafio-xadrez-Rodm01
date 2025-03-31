#include <stdio.h>

// Programa para simular o movimento de peças de xadrez
//incluindo movimento do cavalo 
// por: Rodolfo Assunção


int main() {
    // Simulação do movimento da Torre usando a estrutura de repetição for
    int movimento_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Simulação do movimento do Bispo usando a estrutura de repetição while
    int movimento_bispo = 5;
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < movimento_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }
    printf("\n");
    
    // Simulação do movimento da Rainha usando a estrutura de repetição do-while
    int movimento_rainha = 8;
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimento_rainha);
    printf("\n");
    
    // Simulação do movimento do Cavalo usando loops aninhados
    // O Cavalo se move duas casas para baixo e uma para a esquerda
    printf("Movimento do Cavalo:\n");
    int movimento_cavalo_baixo = 2;
    int movimento_cavalo_esquerda = 1;
    
    // Loop for para mover duas casas para baixo
    for (int k = 0; k < movimento_cavalo_baixo; k++) {
        printf("Baixo\n");
    }
    
    // Loop while para mover uma casa para a esquerda
    int l = 0;
    while (l < movimento_cavalo_esquerda) {
        printf("Esquerda\n");
        l++;
    }
    
    return 0;
}