/*Ejercicio_Taller2*/ 
#include <stdio.h>
#include <conio.h>

int main(){

   int Pacientes,P, Paci_F,Paci_M,Paci,EE,Edad,Pacientemayor,Pacientemenor;
   
   //1= FEMENINO Y 2 = MASCULINO//
   Paci_F= 0;
   Paci_M= 0;
   Pacientemayor= 0;
   Pacientemenor= 0;
   printf("\n Ingresa la cantidad de Pacientes: ");
   scanf("%d", &Pacientes);
   for(P=1;P<=Pacientes;P++)
   {
   printf("\n Tipo de sexo del Paciente [%d]: ",P);
   scanf("%d", &Paci);
   if (Paci== 1){
    Paci_F= Paci_F + 1;
   }
   else
   if(Paci== 2){
      
      Paci_M= Paci_M + 1;
   }
 for (EE=1;EE<=Pacientes;EE++)
 {
    printf("\n Edad del paciente [%d]: ",EE);
    scanf("%d",&Edad);
    if(Edad>= 18)
       Pacientemayor++;
      else
       Pacientemenor++;
   }
   
   
   }
   
   printf("\n La cantidad de Pacientes femeninos es : %d ", Paci_F);
   printf("\n La cantidad de Pacientes Masculinos es : %d ", Paci_M);
   printf("\n La cantidad de Pacientes Mayores de Edad es : %d ", Pacientemayor);
   printf("\n La cantidad de Pacientes Menores de Edad es : %d ", Pacientemenor);
 return 0;  
}
