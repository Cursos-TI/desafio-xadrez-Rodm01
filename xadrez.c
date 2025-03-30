#include <stdio.h>
//por: Rodolfo Assunção
int main() {
    // Simulação do movimento da Torre usando a estrutura de repetição for
    // adicionando variação e iniciando em For
    int movimento_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    // incluindo While para a movimentação do bispo
    // Simulação do movimento do Bispo usando a estrutura de repetição while
    int movimento_bispo = 5;
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < movimento_bispo) {
        printf("Cima, Direita\n");
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
    
    return 0;
}