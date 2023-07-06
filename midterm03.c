#include <stdio.h>
#include <conio.h>

#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;

void main()
{
    float ce, fa ;
   
    PA
    printf ("       Program Celcius to Farenheit \n") ;
    PA
    printf ("Enter Celcius : ") ;
    scanf  ("%f", &ce) ;

    fa = ( ce * 1.8 )+ 32 ;
    printf ("Farenheit : %.2f \n" , fa) ;
    PA


}
