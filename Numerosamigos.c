/*Numerosamigos*/

#include <stdio.h>
#include <windows.h>
int i;
int numeros_amigos(int x, int y){
for(i=2;i<x;i++){
    if(x % i==0){
        y=y+i;
    }
}
return x,y;
}   

int main(){
int n_1, n_2;
int s1=1, s2=1;
printf("Introduzca el numero 1: ");
scanf("%d",&n_1);
printf("Introduzca el numero 2: ");
scanf("%d",&n_2);
s1=numeros_amigos(n_1,s1);
s2=numeros_amigos(n_2,s2);

if((s1==n_2)&&(s2==n_1)) {

    printf ("\n ¡Son amigos! :) ");
    system("pause");
}
else{
    printf ("\n No son amigos :(");
    system("pause");
}
return 0;
}