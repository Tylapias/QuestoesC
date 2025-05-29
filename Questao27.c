#include <stdio.h>

int main(){
    float preco, preco_aumentado;
    
    printf("insira o valor do produto:\n");
    scanf("%f", &preco);
    
    if (preco < 100) {
        preco_aumentado = preco * 1.10;
    } else {
        preco_aumentado = preco * 1.20;
    }
    printf("O valor do produto inflacionado ou não é: %.2f\n", preco_aumentado);
    
    return 0;
}
