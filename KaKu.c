#include <conio.h>
#include <stdio.h>

#define coste_azucar 3
#define coste_cafe 0.72

int main(){

    float cantidad, kilos_azucar, kilos_cafe;

    printf("\n Introduzca la cantidad:");
    scanf("%f", &cantidad);

    kilos_azucar= cantidad/ 2 / coste_azucar;
    kilos_cafe= cantidad/ 3 / coste_cafe;
    cantidad= cantidad/ 3;

    printf("\n %.2f kilos de az%ccar", kilos_azucar, 163);
    printf("\n\n   %.2f kilos de caf%c", kilos_cafe, 130);
    printf("\n\n   quedan %.2f euros", cantidad);

 getch(); /* Pausa */

 return 0;
}