#include <stdio.h>
#include <math.h>
void main () {
	
	float B;
	int T, Dias;
	
	printf("Insira o numero de dias: \n");
	scanf("%i",&Dias);
	
	T = Dias*24;
	B = pow(2,(T/12));
	 

	printf("O numero de bactarias e:%f\n", B);

} 