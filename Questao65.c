#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j;
    int soma = 0;

    printf("Digite os valores da matriz 2x3:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
