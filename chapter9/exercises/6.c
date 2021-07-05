/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Write a function digits(n, k) that returns the k digit ( from the 
 *                  right) in n (a positive integer) 
 *
 *        Version:  1.0
 *        Created:  11/29/2020 04:05:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  digits
 *  Description:  
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int digits ( int n, int k );
int main ( int argc, char *argv[] )
{
    printf("%d ", digits(8294, 2));
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
int digits ( int n, int k )
{
int j;
for ( j = 1; j < k; j++) {
    n = n / 10;

    
}
return n % 10;

    }

