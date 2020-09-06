/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Show the output produced by each of the following program fragments 
 *
 *        Version:  1.0
 *        Created:  09/04/2020 08:40:00 AM
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
  int i = 5; int j =0;
  /*j = ++i * 3 - 2;*/
  /*printf ( "%d %d\n", i, j );*/

  // b)
  i = 5;
  j = 3 - 2 * i++;
/*printf ( "%d %d\n", i, j );*/
  // c)
  i = 7;
  j = 3 * i-- + 2;
printf ( "%d %d\n", i, j );
  // d)
  i = 7;
  j = 3 + --i * 2;

/*printf ( "%d %d\n", i, j );*/
  return EXIT_SUCCESS;
  
}				/* ----------  end of function main  ---------- */

