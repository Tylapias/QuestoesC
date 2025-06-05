#include <stdio.h>

int main() {
   
    int i, num;
    for(i= 1;i <= 10; i++) {
    printf("Insira um número:\n");
    scanf("%d", &num);
    if((num % 2) == 0){
        printf("Seu número é Par \n\n");
    }
    else { printf ("Seu número é Ímpar \n\n");
    }
    }
    return 0;
}
