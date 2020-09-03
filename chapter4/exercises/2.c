/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  If i and j are positive integers, does (-i) / j always have the same
 *                  value as -(i/j)?
 *
 *        Version:  1.0
 *        Created:  09/02/2020 04:28:00 PM
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
  int i = 8; int j = 3;
  printf ( "%d\n", -(i /j) );
  printf ( "%d\n", (-i)/j );
  return EXIT_SUCCESS;


}				/* ----------  end of function main  ---------- */

