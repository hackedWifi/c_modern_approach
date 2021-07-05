/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  (a) Write a macro DISP(f,x) that expands into a call of printf that 
 *                  displays the value of the function f when called with argument x. 
 *                  For example,
 *
 *                  DISP(sqrt, 3.0);
 *
 *                  printf ( "sqrt(%g) = %g\n", 3.0, sqrt(3.0) );
 *
 *                  (b) Write a macro DISP2(f,x,y) that's similar to DISP but works for 
 *                  functions with two arguments.
 *
 *
 *        Version:  1.0
 *        Created:  04/06/2021 04:20:53 PM
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
#include <math.h>
#include <ctype.h>

#define DISP(f,x) (printf(#f "(%g) = %g\n", (x), (f(x))))            /*  */
#define DISP2(f,x,y) (printf( #f"(%g,%g) = %g\n", (x),(y), (f((x),(y))))) /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    double x = 10, y = 2;
    DISP(sqrt, x);
    DISP2(remainder,x, y);
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
