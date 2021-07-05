/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Write a recursive function that computes x ^ n. If n i even we use 
 *                  the formula x^n = x ^ n - 2 * 2. If n odd, then 
 *                  x ^ n =  x * x^ n - 1. The recursion ends whe n = 0, in which case 
 *                  the function returns 1. To test your function, write a program that
 *                  asks the user to enter values for x and n, calls powr to compute 
 *                  x ^ n.
 *
 *        Version:  1.0
 *        Created:  12/12/2020 09:16:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int power (int x, int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int x = 0, n = 0;
    printf ( "Please enter an integer for base: \n");
    scanf ( "%d", &x);
    printf ( "Please enter an integer for exponent: \n");
    scanf ( "%d", &n);
    printf ( "%d ", power(x, n)); 

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int power (int x, int n)
{
    int to_power = 0;
    if ( n == 0) 
        return 1;
    else if ( n % 2 == 0 )
    {
        to_power = power(x, n /2 ) ;
        return to_power * to_power;
    }
    else 
        return x * power(x , n - 1);
}
