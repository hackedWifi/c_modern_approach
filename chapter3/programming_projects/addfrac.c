/*
 * =====================================================================================
 *
 *       Filename:  addfrac.c
 *
 *    Description:  adds two fractions
 *
 *        Version:  1.0
 *        Created:  08/28/2020 10:15:06 PM
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
  int num1, denom1, num2, denom2, result_num, result_denom = 0;
  printf ( "Enter two fractions seperated by a plus sign (+): " );
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf ( "The sum is: %d/%d\n", result_num, result_denom );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
