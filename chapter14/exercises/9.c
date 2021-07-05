/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Write the following  parameterized macros.
 *                  (a) CHECK(x,y,n) - Has the value 1 if both x and y fall between 0 
 *                  and n - 1, inclusive.
 *
 *                  (b) MEDIAN(x,y,z) - Finds the median of x, y, and z.
 *                  (c) POLYNOMIAL(x) - Computes the polynomial 3x^5 + 2x^4 - 5x^3 -
 *                  x^2 + 7x - 6.
 *
 *        Version:  1.0
 *        Created:  04/07/2021 04:37:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#define CHECK(x,y,n) (((x) >=0 && (x) <= ((n)-1)) && ((y) >=0 && (y) <= ((n)-1))?1:0)   /*  */
#define MEDIAN(x,y,z) ((x)<=(y)&&(y)<=(z)?(y):((x)<=(z)&&(z)<=(y))?(z):(x))    
#define POLYNOMIAL(x) ((3*((x)*(x)*(x)*(x)*(x))) \
                        +(2*((x)*(x)*(x)*(x)))   \
                        -(5*((x)*(x)*(x)))       \
                        -((x)*(x))               \
                        +((7*(x))-6))   

      /*  */
#include <stdlib.h>
#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
 printf("Result of CHECK: %d", CHECK(99,99 , 100)); 
 printf("Median is: %d", MEDIAN(5,10, 11)); 
 printf("POLYNOMIAL is: %d", POLYNOMIAL(3)); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

