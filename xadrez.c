#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Movimento Bispo ( 5 casas para a diagonal cima/direita );

printf("\nMovimento da BISPO:\n");

while (bispo <= 5)
{
    printf("Cima / Direita ▲ ►\n", bispo);
    bispo++;
}

printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Movimento da torre ( 5 casas para a direita );

printf("\nMovimento da TORRE:\n");

for (torre; torre <= 5; torre++)
{
    printf("Direita ►\n");
}

printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Movimento Rainha ( 8 casas para a esquerda);

printf("\nMovimento da RAINHA:\n");

do
{
    printf("Esquerda ◄\n", rainha);
    rainha++;

} while (rainha <= 8);


printf("\n");

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
