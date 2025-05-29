#include <stdio.h>

int main(){
    
    float Fahrenheit, Celsius;
    printf("Digite a temperatura em F: \n");
    scanf("%f", & Fahrenheit);
    
    Celsius = (Fahrenheit -32) * 5 / 9;
    
    printf("A temperatura em Celsius é:%.2f\n", Celsius);
    
}
