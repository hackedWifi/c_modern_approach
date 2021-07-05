/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  A program that asks the user to enter a fraction, then reduces the
 *                  fraction to lowest term.
 *
 *        Version:  1.0
 *        Created:  09/28/2020 04:15:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  reduce
 *  Description:  
 * =====================================================================================
 */
void reduce (int numerator, int denominator, 
             int *reduced_numerator, int *reduced_denominator);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
/*HINT: To reduce a fraction to lowest term, first compute the GCD of the numerator and */
/*denominator. Then divide both the numerator and denominator by the GCD.*/
int divisor = 0;
int dividend = 0;
int red_num = 0;
int red_denom = 0;
printf("Enter a fraction: ");
scanf("%d/%d",  &divisor, &dividend);
reduce(divisor, dividend, &red_num, &red_denom);



/*printf("GCD is: %d", n);*/
printf("In lowest terms: %d/%d\n", red_num, red_denom);
/*printf("denominator is %d and numerator is %d", divisor, dividend);*/


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void reduce (int numerator, int denominator, 
             int *reduced_numerator, int *reduced_denominator)
{
int remainder = 0;
int n = numerator;
int d = denominator;
    while(d > 0) {
        remainder = n % d;
        n = d;
        d = remainder;

    }
    *reduced_numerator = numerator / n;
    *reduced_denominator = denominator / n;

}
