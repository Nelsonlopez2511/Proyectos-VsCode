#include <stdio.h>

int main(){
    int var1, var2, aux;

    printf("\n Ingrese un numero en variable 1: ");
    scanf("%d", &var1);
    printf("\n Ingrese un numero en variable 2: ");
    scanf("%d", &var2);

    printf("\n Comenzando intercambio de valores...");

    aux= var1;
    var1= var2;
    var2= aux;

    printf("\n\n Ahora el valor de la var1 es: %d", var1);
    printf("\n\n Ahora el valor de la var2 es: %d", var2);

    getch(); /* Pausa */

    return 0;
}