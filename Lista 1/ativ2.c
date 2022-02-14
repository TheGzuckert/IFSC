#include <stdio.h>
#include <math.h>
void main () {
	float V1, V2, V3, V4, V5, soma;
	
	double resultado;
	
	printf("Insira os valores:\n");
	scanf("%f %f %f %f %f", &V1, &V2, &V3, &V4, &V5);
	
	soma = V1 + V2 + V3 + V4 + V5;
	resultado = pow(soma,1/4);

	printf("resultado da raiz:%2.f",resultado);



}