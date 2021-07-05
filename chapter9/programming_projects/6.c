/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Write a function that computes the value of the following polynomial:
 *                  3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 *        Version:  1.0
 *        Created:  12/11/2020 09:42:49 PM
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
int power(int x, int n);
int compute_polynomial(int x);
int main ( int argc, char *argv[] )
{
    int x = 0;

    printf("Enter an integer: ");
    scanf ( "%d", &x );
    printf("%d ", compute_polynomial(x));
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int compute_polynomial(int x)
{
    int x1 = 3, x2 = 2, x3 = 5, x4 = 7;
    int exp1 = 5, exp2 = 4, exp3 = 3 , exp4 = 2;
    return x1 * power(x, exp1) + x2 * power(x, exp2) - x3 * power(x , exp3) - power(x, exp4) + x4 * x - 6; 

}


int power(int x, int n)
{
    int result = 1;
    while(n-- > 0) 
    {
        result *= x;
    }
    return result;

}
