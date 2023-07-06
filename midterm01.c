//git config --global user.name "S6519N10003"
//git config --global user.email "s6519n10003@sau.ac.th"

//git init
//git add .
//git commit -m "Version......"
//git remote ...........
//git push -u origin master

//-------------------------------------------

//git add .
//git commit -m "Version......"
//git push -u origin master

#include <stdio.h>
#include <conio.h>

#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;

void main()
{
    float r1, r2 , r3, rSUM ;
    
    PA
    printf ("       Program Resistance\n") ;
    PA
    printf ("Enter Resistance 1 : ") ;
    scanf  ("%f", &r1) ;
    printf ("Enter Resistance 2 : ") ;
    scanf  ("%f", &r2) ;
    printf ("Enter Resistance 3 : ") ;
    scanf  ("%f", &r3) ;
    PA
    rSUM = rSUM = r1 * r2 * r3 / ((r1 * r2 )+(r2 * r3 )+ (r1 + r3));
    printf ("Sum Resistance : %.2f \n" , rSUM) ;
    PA


}
