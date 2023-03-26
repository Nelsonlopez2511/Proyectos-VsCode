#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int genero, masculino, i, femenino, n, edad, mayor_edad, menor_edad,dia,mes,anio, cedula, descuento_femenino, descuento_masculino;
    masculino = 0;
    femenino = 0;
    mayor_edad= 0;
    menor_edad= 0;
    descuento_femenino= 0;
    descuento_masculino= 0;
    printf ("\n Ingresa la cantidad de pacientes: ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf ("\n Paciente %d\n", i);
        printf ("Selecciona el valor de genero.\n");
        printf ("\t1.- femenino\n");
        printf ("\t2.- masculino\n");
        printf ("\t: ");
        do {
            scanf ("%d", &genero);
            if (genero<1||genero>2)
                printf ("\n Valor incorrecto. Ingresalo nuevamente.: ");
            } 
        while (genero<1||genero>2);
        if(genero==1)
            femenino=femenino+1;
        else
            masculino=masculino+1;
        putchar ('\n');
        printf("\n Ingrese su cedula de identidad: ");
        scanf("%d", &cedula);

        printf( "\n   Introduzca edad: " );
        scanf( "%d", &edad );
        if(edad >=18)
            mayor_edad=mayor_edad+1;
        else
            menor_edad=menor_edad+1;
        putchar ('\n');
        
        printf("\n Fecha de Nacimiento del Paciente:");
        printf("\n Dia: ");
        scanf( "%d", &dia);
        printf("\n Mes: ");
        scanf( "%d", &mes);
        printf("\n Anio: ");
        scanf( "%d", &anio);
        if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( dia >= 1 && dia <= 31 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( dia >= 1 && dia <= 30 )
                          printf( "\n   FECHA CORRECTA" );
                      else
                          printf( "\n   FECHA INCORRECTA" );
                      break;

            case  2 : if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          if ( dia >= 1 && dia <= 29 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
                      else
                          if ( dia >= 1 && dia <= 28 )
                              printf( "\n   FECHA CORRECTA" );
                          else
                              printf( "\n   FECHA INCORRECTA" );
        }
    }
    else
        printf( "\n   FECHA INCORRECTA" );
    }

        if (cedula % 2 ==0 && femenino)
        descuento_femenino=descuento_femenino+1;
        if (masculino==edad>60)
        descuento_masculino=descuento_masculino+1;

    printf("\n La cantidad de pacientes masculinos son: %d", masculino);
    printf("\n La cantidad de pacientes femeninos son: %d", femenino);
    printf("\n La cantidad de pacientes mayores de edad son: %d", mayor_edad);
    printf("\n La cantidad de pacientes menores de edad son: %d", menor_edad);
    printf("\n %d Paciente/s tendra/n un descuento de 15 por ciento sobre el costo de la consulta", descuento_femenino);
    printf("\n %d Paciente/s mayor/es de 60 tendran un descuento de 30 por ciento", descuento_masculino);

    getch();
    return 0;
}