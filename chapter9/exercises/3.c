/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Write a function that computes the greatest common divisor ( GCD ) 
 *
 *        Version:  1.0
 *        Created:  11/27/2020 10:02:42 PM
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
int gcd(int m, int n );
int main ( int argc, char *argv[] )
{
    printf("%d ", gcd(12, 28));
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int gcd(int m, int n ) 
{

  int remainder = 0;
  if (n == 0) return m;
  
  while(n > 0) {
    remainder = m % n;
    m = n;
    n = remainder;
    
  }
  return m;

}
