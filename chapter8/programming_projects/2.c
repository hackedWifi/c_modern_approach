/*
 * =====================================================================================
 *
 *       Filename:  repdigit.c
 *
 *    Description:  Checks numbers for repeated digits 
 *
 *        Version:  1.0
 *        Created:  10/19/2020 01:22:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 *
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE ( (int) (sizeof(digit_seen) / sizeof(digit_seen[0]) ))
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int digit_seen[10] = {0}; 
  int digit;
  long n;
 printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    digit = n % 10;
    digit_seen[digit]++;
    n /= 10;
  }

  printf("Digits:      ");

  for ( digit = 0; digit <= 9; digit++ ) {
    printf("%3d ", digit);
  }
  printf("\nOccurrances: ");
  for ( digit = 0; digit <=9 ; digit++ ) {
    printf("%3d ", digit_seen[digit] ); 
  }
  printf("\n");

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
