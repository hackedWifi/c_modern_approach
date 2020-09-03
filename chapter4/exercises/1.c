/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Show the output produced by each of the following program fragments. 
 *                  Assume that i, j, and k are int variables.   
 *        Version:  1.0
 *        Created:  09/02/2020 03:58:09 PM
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
  int a = 2; int b = 3;
  int c = 2; int d = 3;
  int e = 7; int f= 8; int g = 9;
  int h = 1; int i = 2; int j = 3;
  printf ( "%d %d\n", a / b, a % b ); // outputs 0 and 2
  printf ( "%d\n", (c + 10) % d  ); // outputs 0
  printf ( "%d\n", (e + 10) % f / g ); //outputs 0
  printf ( "%d\n", ( h + 1) % (i + 2) / j ); //outputs 0
  

  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */
