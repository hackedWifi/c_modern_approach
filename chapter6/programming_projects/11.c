/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  A program that approximates 'e' (mathematical constant) by computing
 *                  the value of (1 + 1/n) ^ n
 *
 *        Version:  1.0
 *        Created:  10/03/2020 07:06:07 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  float e = 1.0f;
  float num = 1.0f;
  
  float  denominator = 1.0f;

  printf("Enter a number: ");
  scanf("%f", &num );

  for ( int i = 1 ; i < num; i++ ) {
    /*e *= 1.0 + (1.0/num);*/
    e += 1.0f/ (denominator *= i);

  }
  printf("e approximates to: %f", e);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


