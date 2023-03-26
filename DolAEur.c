/* Equivalencia Dolar a Euro*/

#include <conio.h>
#include <stdio.h>

#define Euro 166.386

int main(){

    float Dolar, Euros;

    printf("\n Ingrese la cantidad en dolares: ");
    scanf("%f", &Dolar);

    Euros= Dolar/ Euro;

    printf("\n Esta cantidad ingresada Equivale a: %.2f euros", Euros);

    getch(); /* Pausa */

    return 0;
}