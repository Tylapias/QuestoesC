#include <stdio.h>

int main() {
    int ano, sobrante;
    
    printf("Insira um ano: \n");
    scanf("%d", &ano);
    
    sobrante= ano%4;
    
    if(sobrante == 0)
    printf("O ano é bissexto");
    
    else printf("O ano não é bissexto");
    
    return 0;
}
