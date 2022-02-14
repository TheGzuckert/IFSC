#include <stdio.h>
#include <math.h>
void main () {
	float a, b, c, x;
	

	printf("Insira o valor de a: \n");
	scanf("%f",&a);

	printf("Insira o valor de b: \n");
	scanf("%f", &b);

	printf("Insira o valor de c: \n");
	scanf("%c", &c);

	x = pow(b,2) - 4*a*c;

	printf("o valor da equação e: %i",x);


}