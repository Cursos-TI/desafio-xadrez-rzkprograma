#include <stdio.h>

int main() {
    int escolha;
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Movimento do Cavalo: 2 para baixo e 1 para a esquerda
    int casascima = 2;
    int casasdireita = 1;

    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n"); // Nova opção para o Cavalo
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Torre: mover 5 casas para a direita (for)
        printf("\nMovimento da Torre:\n");
        for (int i = 0; i < movimentoTorre; i++) {
            printf("Direita\n");
        }
    } else if (escolha == 2) {
        // Bispo: mover 5 casas para cima e à direita (while)
        printf("\nMovimento do Bispo:\n");
        int i = 0;
        while (i < movimentoBispo) {
            printf("Cima Direita\n");
            i++;
        }
    } else if (escolha == 3) {
        // Rainha: mover 8 casas para a esquerda (do-while)
        printf("\nMovimento da Rainha:\n");
        int i = 0;
        do {
            printf("Esquerda\n");
            i++;
        } while (i < movimentoRainha);
    } else if (escolha == 4) {
        // Cavalo: movimento em "L"
        printf("\nMovimento do Cavalo:\n");

        // Primeiro movimento: duas casas para cima (usando for)
        for (int i = 0; i < casascima; i++) {
            printf("cima\n");
        }

        // Segundo movimento: uma casa para a direita (usando while)
        int j = 0;
        while (j < casascima) {
            printf("direita\n");
            j++;
        }

    } else {
        printf("Opção inválida. Tente novamente com 1, 2, 3 ou 4.\n");
    }

}
