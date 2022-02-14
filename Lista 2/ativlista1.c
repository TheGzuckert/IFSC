// Implemente em linguagem C algoritmo que calcule o reajuste de salario de um
// colaborador de uma empresa. Considere que o colaborador deve receber um
// reajuste de 15% caso seu salário seja menor que R$500,00. Se o salário for maior 
// ou igual a R$500,00, mas menor ou igual a R$1.000,00, seu reajuste será de 10% 
// caso seja ainda maior que R$1.000,00, o reajuste deve ser de 5%.
#include <stdio.h>
void main () {
    float salario, soma, reajuste;
    printf("Insira o salario: \n");
    scanf("%f", &salario);

    if (salario < 500) {
        reajuste = salario * 0.15;
        soma = salario + reajuste;
        printf("O salario e: %.2f\n",soma);
    
    } 
    if (salario >= 500 && salario <= 1000) {
        reajuste = salario * 0.10;
        soma = salario + reajuste;
        printf("O salario e: %.2f\n",soma);   
    }
    if (salario > 1000) {
        reajuste = salario * 0.05;
        soma = salario + reajuste; 
        printf("O reajuste e: %.2f\n",soma);
    }


               
        
    }


