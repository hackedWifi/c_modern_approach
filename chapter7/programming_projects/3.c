/*
 * =====================================================================================
 *
 *       Filename:  sum2.c
 *
 *    Description:  Sums a series of numbers (using long variables)
 *
 *        Version:  1.0
 *        Created:  10/05/2020 03:08:21 PM
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
#include <limits.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  double n, sum = 0; 
  printf("This program sums a series of integers.\n");
  printf ( "Enter intergers ( 0 to terminate ) " ); 
  scanf("%lf", &n);

  while(n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %lf\n", sum);

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
