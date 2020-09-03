/*
 * =====================================================================================
 *
 *       Filename:  exercise-2.c
 *
 *    Description:  Write callsof printf that display a float variable x in
 *                  
 *
 *        Version:  1.0
 *        Created:  08/20/2020 03:16:51 PM
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
 float x = 3.123;

  // a) Exponential notation; left justified in a field of size 8;
  // one digit after the decimal point.
  printf ( "%-8.1e\n", x );

  // b) Exponential notation; right justified in a field of size 10;
  // six digits after the decimal point.
  printf ( "%10.6e\n", x );

  // Fixed decimal notations; left-justified in a field of size 8; three
  // digits after the decimal point.
  printf ( "%-8.3f\n", x );
  
  // Fixed decimal notations; right-justified in a field of size 6; no digits
  // after the decimal point.

  printf ( "%6f", x );
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */

