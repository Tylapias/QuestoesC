#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
     float media;

    printf("Insira 6 números que deseja tirar a média: \n ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    media = (a + b + c + d + e + f) / 6;

    printf("A média é: %.2f\n", media);

    return 0;
}
