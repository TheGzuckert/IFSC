//para quando tiver duvida de como o if e else funcionan//
#include <stdio.h>
void main () {
    
    int bebidas;
    printf("Insira sua idade:\n");
    scanf("%i", &bebidas);

    if (bebidas < 18) {
        printf("Bebidas nao estao liberadas");
    } else {
        printf("Bebidas estao liberadas");
    }


}