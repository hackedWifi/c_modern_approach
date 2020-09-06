/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Show the output produced by the following program fragments 
 *
 *        Version:  1.0
 *        Created:  09/03/2020 09:54:13 PM
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
  // a)
  int i =6; int j = 0;
  /*j = i += i; */

  // b)
  /*i = 5; j = (i -= 2) + 1;*/

  // c)
  /*i = 7; j = 6 + (i = 2.5);*/

  // d)
  i = 2; j = 8;
  j = ( i = 6 ) + (j + 3 );
  printf("%d %d", i , j);
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */
