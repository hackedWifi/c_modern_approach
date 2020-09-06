/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Asks the user to enter a two-digit number, then prints the number
 *                  with its digits reversed.
 *                  HINT: if n is an integer, then n % 10 is the last digit and n / 10
 *                  is n with the last digit removed.
 *
 *        Version:  1.0
 *        Created:  09/04/2020 04:07:58 PM
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
  int digit = 0;
  printf("Enter a two-digit number: ");
  scanf("%d", &digit);
    printf("%d%d ", digit % 10, digit / 10 );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

