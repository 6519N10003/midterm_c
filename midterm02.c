#include <stdio.h>
#include <conio.h>

#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;

void main()
{
    float price1 , price2 , price3 ;
    char p_ID[5] ,p_name[20] ;
    
    PA
    printf ("       Price Sale\n") ;
    PA
    printf ("Product ID : ") ;
    scanf  ("%s", &p_ID) ;
    printf ("Product Name : ") ;
    scanf  ("%s", &p_name) ;
    printf ("Product Price :") ;
    scanf  ("%f", &price1) ;
    PA
    price2 = price1 - (price1* 0.25 ) ;
    price3 = price2 + (price2 * 0.07) ;
    printf ("Product Sale : %.2f \n" , price3) ;
    PA


}