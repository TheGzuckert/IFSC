#include <stdio.h>
void main () {
	float V1, centimetros;
	printf("Envie a distancia\n");
	scanf ("%f", &V1);
	
	centimetros = V1*100000;
	printf("Distancia percorrida: %f", centimetros);


}