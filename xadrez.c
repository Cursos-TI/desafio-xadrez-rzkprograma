#include <stdio.h>

int main() {
    int escolha;
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
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
    } else {
        printf("Opção inválida. Tente novamente com 1, 2 ou 3.\n");
    }

}
