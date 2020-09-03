/*
 * =====================================================================================
 *
 *       Filename:  polynomial.c
 *
 *    Description:  Asks the user for a value and displays the value of a polynomial, 
 *                  using Horner's rule.
 *        Version:  1.0
 *        Created:  08/14/2020 03:40:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  float x = 0;
  float result = 0;
  printf ( "Please enter a value for x: " );
  scanf ( "%f", &x );
  result = (((( 3 * x + 2 ) * x - 5) * x -1 ) * x + 7) * x - 6; 
  printf ( "%f", result );
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */
