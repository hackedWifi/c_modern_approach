/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  A program that calculates the GCD between two numbers.
 *
 *        Version:  1.0
 *        Created:  09/28/2020 03:24:54 PM
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

/*hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes*/
/*as follows: Let m and n be variables containing the two numbers. If n is 0, the stop:*/
/*m contains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into*/
/*m and copy the remainder into n. Then repeat the process, starting with testing whether*/
/*n is 0.*/
    
int m = 0;
int n = 0;
int remainder = 0;
printf("Enter two intergers: ");
scanf("%d %d",  &m, &n);

while(n > 0) {

if ( n == 0 ) printf("The GCD is: %d \n", m);
remainder = m % n;
m = n;
n = remainder;

}
printf("The GCD is: %d \n", m);
        return EXIT_SUCCESS;
