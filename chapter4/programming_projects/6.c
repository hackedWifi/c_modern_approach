/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Computes the European Article Number(EAN) of an item by adding the
 *                  second, fourth, sixth, eighth, and tenth, twelfth. Then add the 
 *                  first, third, fifth, seventh, ninth, and eleventh digits. Multiply the first
 *                  sum by 3 and add it to the second sum. Substract 1 from the total.
 *                  Compute the remainder when the adjusted total is divided by 10.
 *                  Substract the remainder from 9.
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
  int first, second, third, fourth, fifth, sixth, seventh,
      eighth, ninth, tenth, eleventh, twelfth, first_sum, second_sum, total;
  printf ( "Enter the 12 digits EAN: " );
  scanf ( "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth,
      &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);
  first_sum= second+ fourth+ sixth+ eighth+ tenth+ twelfth;
  second_sum = first + third+ fifth+ seventh+ ninth+ eleventh;
  total = 3 * first_sum + second_sum;
  printf ( "Check digit: %d\n", 9 - ((total - 1) %  10));
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
