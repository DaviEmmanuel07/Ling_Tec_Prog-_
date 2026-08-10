#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]){

    float base, altura, area;

    printf("insira o valor da BASE \n");
    scanf("%f", &base);
    printf("insira o valor da BASE \n");
    scanf("%f",&altura);
    area = (base*altura)/2;

    printf("a area do triangulo = %0.2f", area);
    return 0;

} 
