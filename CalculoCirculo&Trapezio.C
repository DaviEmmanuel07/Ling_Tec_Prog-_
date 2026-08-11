#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main(int argc, char *argv[]) {
	
	float r, area;
	
	printf("insira o raio R do circulo\n");
	scanf("%f",&r);

    area = pi *(r*r);

    printf("a area do circulo de raio R %f = %f\n", r, area);
	
	float base_menor, base_maior , altura;
	
	printf("insira o valor da base maior\n");
	scanf("%f",&base_maior);
	
	printf("insira o valor da base menor\n");
	scanf("%f",&base_menor);

    printf("insira o valor da altura\n");
    scanf("%f",&altura);
	
	area = (base_maior+base_menor)*altura/2;
	
	printf("a area do trapezio %f\n", area);	
	return 0;
}
