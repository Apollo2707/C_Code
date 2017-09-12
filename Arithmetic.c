/******************************************
*Programmer(s) : Andrew A Neumann, SrA
*Last Modified: 8 30 17
*Program Name:Arithmetic
*Program Desc:Takes the two sides of a right triangle and finds the hypotenuse
* Program also asks solves finds slope for quardrat
******************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double dblSideOne;
    double dblSideTwo;

    printf("Enter the length of both sides.\n");
    fscanf(stdin, "%lf%lf", &dblSideOne, &dblSideTwo);
    
    double dblHypo = sqrt((dblSideOne * dblSideOne) + (dblSideTwo * dblSideTwo));
    printf("The hypotenuse is %lf\n", dblHypo);

    double dblA;
    double dblB;
    double dblC;

    printf("Quadratic equation, enter A, B, then C.\n");
    fscanf(stdin, "%lf%lf%lf", &dblA, &dblB, &dblC);

    //check for invalids
    if(!dblA || ((dblB*dblB)-(4 * dblA * dblC)) == 0)
    {
        printf("Invalid values.");
    }
    else
    {
        double dblXPlus = (-dblB + sqrt((dblB*dblB)- (4 * dblA * dblC)))/(dblA *2);
        double dblXMinus = (-dblB - sqrt((dblB*dblB)- (4 * dblA * dblC)))/(dblA *2);
        printf( "X = %lf and %lf\n", dblXPlus, dblXMinus);
    }


}