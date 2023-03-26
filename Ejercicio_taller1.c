/*Ejercicio_Taller1*/ 
/*Escribir en lenguaje C que pida por teclado n numeros por teclados enteros cada uno de ellos debe ser introducido mientras que no sea distinto de 0: Calcular:
1.¿Cuantos son pares o impares?
2.¿Cuantos 0´s se han introducido por el teclado
3.¿Cuantos son primos?*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
  int n,i,num,pares,impares,cont0,sumaprimos,banderaprimo,divisores;
  pares= 0;
  impares= 0;
  cont0= 0;
  sumaprimos= 0;
  banderaprimo= 0;

  printf("\n Ingrese la cantidad de numeros a leer: ");
  scanf("%d", &n);

  while (n < 0);

  for (i=1; i<=n; i++)
  {

   printf("\n ingrese el numero [%d]: ", i);
   scanf("%d", &num);
  
  
  if(num % 2 ==0)
   pares++;
  else
   impares++;

  if(num==0)
   cont0++;

  for(divisores=num-1;divisores > 1 && banderaprimo !=1; divisores--){

    if(num % divisores==0){
      banderaprimo=1;
    }
  }
  if(banderaprimo==0){
    sumaprimos+=1;
  }
  }
  

 printf("\n La cantidad de numeros par es: %d", pares);
 printf("\n La cantidad de numeros Impares es: %d ", impares);
 printf("\n La cantidad de 0 Introducidos es: %d ", cont0);
 printf("\n Se han introducidos %d numeros primos", sumaprimos);
   
 
 return 0;
  }