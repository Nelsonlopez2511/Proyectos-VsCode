#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(){

    float a, v;

    printf("\n Ingrese la arista: ");
    scanf("%f", &a);

    v= pow(a,3);

    printf("\n El volumen es: %.2f", v);

    getch(); /* Pausa */

    return 0;
}