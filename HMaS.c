#include <conio.h>
#include <stdio.h>

int main(){

    int horas,minutos,segundos,total;

    printf(" Ingrese las horas:\n");
    scanf("%d", &horas);
    printf("Ingrese el numero de minutos:\n");
    scanf("%d", &minutos);
    printf("Ingrese la cantidad de segundos:\n");
    scanf("%d", &segundos);

    total = horas * 3600 + minutos* 60 + segundos;

    printf("\n Desde las %d:%d:%d horas han pasado %d segundos.", horas,minutos,segundos, total);

    getch(); /* Pausa */

    return 0;
    }