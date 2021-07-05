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
int remainder = 0;
printf("Enter a fraction: ");
scanf("%d/%d",  &divisor, &dividend);
int n = divisor;
int d = dividend;

while(d > 0) {

remainder = n % d;
n = d;
d = remainder;

}

/*printf("GCD is: %d", n);*/
printf("In lowest terms: %d/%d\n", divisor/n, dividend/n);
/*printf("denominator is %d and numerator is %d", divisor, dividend);*/


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

