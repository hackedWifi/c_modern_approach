/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Write parameterized macros that compute the following values. 
 *
 *        Version:  1.0
 *        Created:  04/06/2021 02:01:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


#define PRODUCT(x,y) (((x)*(y) < 100.0) ? 1 : 0) 
#define REMAINDER(n) (n) % 4.0			/*  */
#define CUBE(n) (n) * (n) * (n)      /*  */

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  float n = 10.0;
  float y = 9.0; 
  int cube = CUBE(n);

  printf ( "The cube of %f is: %d \n", n, cube );
  /*printf ( "The remainder of %ld/4 is: %d \n", n, REMAINDER(n));*/
  printf ( "The product of %.2f*%.2f is less than 100: %d\n",n, y, PRODUCT(n, y));

  // If I modify the type of the variable from int to float. It fails to compile when
  // using the REMAINDER(N) macro 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
