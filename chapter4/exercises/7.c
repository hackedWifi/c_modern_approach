/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Computes a Universal Product Code check digit 
 *
 *        Version:  1.0
 *        Created:  09/03/2020 04:13:21 PM
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
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
  printf ( "Enter the first (single) digit " );
  scanf ( "%1d", &d );
  printf ( "Enter the first group of five digits: ");
  scanf ( "%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf ( "Enter the second group of five digits: ");
  scanf ( "%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5 );
  first_sum = d + i2 +i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;
  printf ( "Check digit: %d\n", 10 - ((total % 10 ) %  10));
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
