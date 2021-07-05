/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  write a recursive version of the gcd function. Here's the strategy
 *                  to use fo computing gcd(m, n): If n is 0, return m. Otherwise, call
 *                  gcd recursively, passing n as the first argument and m % n as the 
 *                  second one.
 *
 *        Version:  1.0
 *        Created:  12/04/2020 09:22:22 PM
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

    return (n == 0) ? m : gcd(n, m % n);

}

