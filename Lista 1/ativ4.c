#include <stdio.h>
#include <math.h>
void main () {
	float C1, soma, J, m, c;
	int M; 
	
	printf("Insira o valor do montante:\n");
	scanf("%f", &C1);
	
	printf("Insira os meses:\n");
	scanf("%i", &M);
	
	printf("Valor dos Juros:\n");
	scanf("%f",&J);
	
	
	soma = 1 + J/100; 
	m = pow(soma,M);
	c = m * C1;

	printf("O Valor de F e:%f ", c);
	
}