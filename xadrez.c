#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função para mover o Bispo uma vez (diagonal cima-direita)
void moverBispoUnico(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima Direita\n");
    }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) { // duas casas para cima
        printf("Cima\n");
        if (i == 1) {
            for (int j = 0; j < 1; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;
                }
            }
        }
    }
}

void exibirMenu() {
    printf("\nEscolha uma peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair\n");
    printf("Digite o número da sua escolha: ");
}

int main() {
    int escolha;
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    do {
        exibirMenu();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nMovimento da Torre:\n");
                moverTorre(movimentoTorre);
                break;
            case 2:
                printf("\nMovimento do Bispo:\n");
                moverBispoUnico(movimentoBispo);
                break;
            case 3:
                printf("\nMovimento da Rainha:\n");
                moverRainha(movimentoRainha);
                break;
            case 4:
                printf("\nMovimento do Cavalo:\n");
                moverCavalo();
                break;
            case 5:
                printf("Saindo do jogo. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente com 1, 2, 3, 4 ou 5.\n");
        }
    } while (escolha != 5);

    return 0;
}
