/* NÚMERO PAR O IMPAR */

#include <conio.h>
#include <stdio.h>

int main(){

    int num;

    printf("\n Ingrese un n%cmero cualquiera:" , 163 );
    scanf("%d", &num);

    if (num % 2 == 0)
      printf("\n El numero que ingresastes es par");
    else 
        printf("\n El numero que ingresastes es impar");
    
    getch(); /* Pausa */

    return 0;
}