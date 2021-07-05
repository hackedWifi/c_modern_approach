/*
 * =====================================================================================
 *
 *       Filename:  broker.c
 *
 *    Description:  Calculates a broker's commission.
 *
 *        Version:  1.0
 *        Created:  09/06/2020 04:05:32 PM
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
  float commission, value;
  printf("Enter value of trade: ");
  scanf("%f", &value);

  
  if ( value < 2500.00f ) 
    commission = 30.00f + 0.17f * value;
  else if ( value < 6250.00f)
    commission = 56.00f + 0.0066f * value;
  else if ( value < 20000.00f)
    commission = 76.00f + 0.0034f * value;
  else if ( value < 50000.00f)
    commission = 100.00f + 0.0022f * value;
  else if ( value < 500000)
    commission = 155.00f + 0.0011f * value;
  else 
    commission = 255.00f + 0.0009f * value;
  
  if (commission < 39.00f)
    commission = 39.00f;

  printf ( "Commission : $%.2f\n", commission );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
