#include <stdio.h>

// Função recursiva para mover a Torre
// Cada chamada imprime "Direita" e chama a função novamente até que o contador chegue a zero
void moverTorre(int movimento_torre) {
    if (movimento_torre == 0) return; // Caso base: quando o número de movimentos chega a zero
    printf("Direita\n");
    moverTorre(movimento_torre - 1); // Chamada recursiva decrementando o número de movimentos
}

// Função recursiva para mover o Bispo com loops aninhados
// O Bispo se move diagonalmente, combinando movimentos verticais e horizontais
void moverBispo(int movimento_bispo, int passo) {
    if (movimento_bispo == 0) return; // Caso base: quando não há mais movimentos a serem feitos
    
    // Loop interno para representar o deslocamento diagonal (Cima e Direita)
    for (int i = 0; i < passo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    
    moverBispo(movimento_bispo - 1, passo); // Chamada recursiva decrementando o número de movimentos
}

// Função recursiva para mover a Rainha
// A Rainha pode se mover em qualquer direção, aqui simulamos um movimento contínuo para a esquerda
void moverRainha(int movimento_rainha) {
    if (movimento_rainha == 0) return; // Caso base: quando o número de movimentos chega a zero
    printf("Esquerda\n");
    moverRainha(movimento_rainha - 1); // Chamada recursiva decrementando o número de movimentos
}

int main() {
    // Definição do número de movimentos para cada peça
    int movimento_torre = 5; // Número de casas que a Torre deve se mover
    int movimento_bispo = 5; // Número de passos diagonais do Bispo
    int movimento_rainha = 8; // Número de casas que a Rainha deve se mover
    
    // Movimento da Torre utilizando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(movimento_torre);
    printf("\n");
    
    // Movimento do Bispo utilizando recursividade e loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(movimento_bispo, 1);
    printf("\n");
    
    // Movimento da Rainha utilizando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(movimento_rainha);
    printf("\n");
    
    // Movimento do Cavalo com loops aninhados e controle de fluxo
    printf("Movimento do Cavalo:\n");
    int movimento_cavalo_cima = 2; // O cavalo se move duas casas para cima
    int movimento_cavalo_direita = 1; // E depois uma casa para a direita
    
    // Loop para movimentação do Cavalo (duas casas para cima)
    for (int i = 0; i < movimento_cavalo_cima; i++) {
        printf("Cima\n");
    }
    
    // Loop para movimentação do Cavalo (uma casa para a direita)
    for (int j = 0; j < movimento_cavalo_direita; j++) {
        if (j == 1) continue; // Exemplo de controle de fluxo (embora neste caso não afete a saída)
        printf("Direita\n");
    }
    
    return 0; // Fim do programa
}