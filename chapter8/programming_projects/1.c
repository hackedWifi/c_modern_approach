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
  bool digit_seen[10] = {false} , repeated_digits[SIZE] = {false};
  int digit;
  long n;
 printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    digit = n % 10;
    if( digit_seen[digit])
      repeated_digits[digit]= true;
    digit_seen[digit] = true;
    n /= 10;
  }
  printf("Repeated digits(s) :");
  for ( int i = 0; i < SIZE; i++ ) {
    if(repeated_digits[i])
   printf("%d ", i);
  }
  printf("\n");
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
