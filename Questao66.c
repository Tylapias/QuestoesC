#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int maior;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa maior com o primeiro elemento
    maior = matriz[0][0];

    // Procura o maior valor
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor da matriz eh: %d\n", maior);

    return 0;
}
