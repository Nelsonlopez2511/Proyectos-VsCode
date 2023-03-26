#include <stdio.h>

#define Dato 4
main () 
{
    int x, y = 1;
    float z;
    x=3/2+10-3;
    z= 3.0/2.0 + 10-3;
    z= 3.0/2.0 + 10-3;
    printf ("%d -- %.2f \n", x, z);
    printf ("%d\n", Dato*3+1/2 );
    printf ("%d\n",5+2-1/5);
    printf ("%d\n", 3>1 || Dato*2<1);
    printf ("%d\n", 5!=1 && Dato>2);
    y=x;
    printf("%d\n", x+y<=z);
}