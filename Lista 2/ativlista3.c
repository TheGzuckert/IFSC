// mplemente em linguagem C algoritmo que leia um valor numérico inteiro e
// apresente por extenso o nome do mês correspondente ao valor entrado. Caso
// sejam fornecidos valores menores que 1 e maiores que 12, o programa deve
// apresentar a mensagem “Valor inválido”.
#include <stdio.h>
#include <math.h>
void main () {
    int mes;
    printf("Insira o mes desejado:\n");
    scanf("%i", &mes);

    if (mes == 1 ) {
        printf("O mes desejado e Janeiro");
    } 
    if (mes == 2) {
        printf("O mes dsejado e Fevereiro");
    }
    if (mes == 3) {
        printf("O mes desejado e Marco");
    }
    if (mes == 4) {
        printf("O mes desejado e Abril ");
    }
    if (mes == 5) {
        printf(" O mes desejado e Maio");
    }
    if (mes == 6) {
        printf("O mes desejado e Junho");
    }
    if (mes == 7) {
        printf("O mes desejado e Julho");
    }
    if (mes == 8) {
        printf("O mes desejado e Agosto");
    }
    if (mes == 9) {
        printf("O mes desejado e Setembro");
    }
    if (mes == 10) {
        printf("O mes desejado e Outubro");
    }
    if (mes == 11) {
        printf("O mes desejado e Novembro");
    }
    if (mes == 12){
        printf("O mes desejado e Dezembro");
    }
    if (mes <1 || mes > 12){
        printf("Valor invalido ");
    } 

}