// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int nota = 0, qtd = 0, soma = 0;
    float media = 0.0;
    
  while(nota >= 0){
  
  printf("Digita uma nota (insira um valor negativo para sair):\n");
  scanf("%d", &nota);
  
if(nota >= 0){
    soma += nota;
    qtd++;
}
}

media = (soma / qtd);

printf("A média das notas digitadas: %2.f\n", media);
    return 0;
 
    
}
