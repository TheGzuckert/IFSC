//Implemente em linguagem C algoritmo que receba um número inteiro e verifique se é par ou ímpar.//
#include <stdio.h>
void main () {
    int numero, impar,par;
    printf("Insira o numero desejado: \n");
    scanf("%i", &numero);
// o % pega o resto da divisão e divide por 2 //
    if (numero % 2==0)  {
        
        printf("O numero e par\n",numero);
    
    } else {
        printf("O numero e impar \n", numero);
    }
        
    
    
    
    
}

