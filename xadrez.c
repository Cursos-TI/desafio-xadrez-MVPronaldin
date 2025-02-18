#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1 , torre = 1 , rainha = 1;
    int cavalo = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("O bispo se movimenta 6 casas na diagonal direita-cima.\n");
    while (bispo <= 6){
        printf("\ncima \ndireita\n");
        bispo++;        
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("A torre se movimenta 7 casas pra direita.");
    do {
        printf("\ndireita\n");
        torre++;
    } while(torre<=7);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("A rainha se movimenta 10 casas cima.\n");
    for (rainha == 0; rainha <=10; rainha++){
        printf("\ncima\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("O cavalo se movimenta 2 vezes acima e uma a direita.\n");
    while (cavalo--){
        for(int i = 0; i <= 2; i++){
            printf("cima\n");
        }
        printf("direita\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
