#include <stdio.h>
void main () {
	float prestacao,acrescimo, desconto, prejuizo;
	printf("prestacao atrasada: \n");
	scanf ("%f", &prestacao);
	acrescimo = prestacao + 0.11;
	desconto = prestacao + acrescimo/0.11;
	prejuizo = prestacao - desconto;
	

	printf("Valor com juros: %f\n",acrescimo);
	printf("Valor com desconto:%f\n",desconto);
	printf("Prejuizo do comerciante:%f\n",prejuizo);

}