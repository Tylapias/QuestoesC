#include <stdio.h>
#include <math.h>

int main () {
    
    float num1, num2, num3, maior, inter, menor;
    
    printf("Insira três números não inteiros:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    maior = num1;
    menor = num1;
    
    if(num2 > maior) {
        maior = num2;
    }
    if(num3 > maior) {
        maior = num3;
    }
    
    if(num2 < menor) {
        menor = num2;
    }
    if(num3 < menor) {
        menor = num3;
    }

    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        inter = num1;
    } else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        inter = num2;
    } else {
        inter = num3;
    }
        
    printf("O maior valor foi: %.2f\n", maior);
    printf("O valor intermediário foi: %.2f\n", inter);
    printf("O menor valor foi: %.2f\n", menor);
    
    return 0; 
}
