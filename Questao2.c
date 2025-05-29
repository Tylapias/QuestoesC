#include <stdio.h>

int main (){
 int a=1;
 
 printf("Insira um número: \n");
 scanf("%d", &a);
 if(a % 2 == 0){
     printf("%d É par!\n", a);
 } else {
     printf("%d É ímpar!\n", a);
 }
}

