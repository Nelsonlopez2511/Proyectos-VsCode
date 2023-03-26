 /* Nota 3 parciales */

#include <conio.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota_total;

    printf("\n Ingrese la primera Nota ");
    scanf("%f", &nota1);
    printf("\n Ingrese la segunda Nota ");
    scanf("%f", &nota2);
    printf("\n Ingrese la tercera Nota ");
    scanf("%f", &nota3);

    nota_total= (nota1+nota2+nota3)/3;

    printf("\n La nota total es: %.2f", nota_total);

    getch(); /* Pausa */

    return 0;
}