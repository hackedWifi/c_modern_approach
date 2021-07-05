/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  For each of the following macros, give an example that illustrates a
 *                  problem wiht the macro and show how to fix it.
 *
 *                  (a) #define AVG(x,y) (x+y)/2
 *                  (b) #define AREA(x,y) (x)*(y)
 *
 *        Version:  1.0
 *        Created:  04/06/2021 02:57:54 PM
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

#define AVG(x,y) (((x)+(y))/2)
#define AREA(x,y) ((x)*(y))

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

/*(a) #define AVG(x,y) (x+y)/2*/
  /*If you pass a integer type the output will be innaccurate*/

  float a = 98, b = 99;
  printf ( "The average is: %f\n", AVG(a>b,b));

  /*fix it by changing the type of 2 to 2.0 to reflect a float/double type*/
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

