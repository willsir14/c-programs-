/*WRITE A PROGRAM TO CALCULATE THE COMPOUND INTEREST */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r ,CI ,p ,i,n;
    //prompt for input data
    printf("enter the value of interest : ");
    scanf("%f",&r);
    printf("enter the value of number of year :");
    scanf("%f",&n);
    printf("enter the value of a principle : ");
    scanf("%f",&p);
    //calculalte i ,then CI
    i=r/100;
    CI=p*pow((1+r/100),n);
    //display the ouotput
    printf("the compound interest is : %f",CI );
    return 0;
}
