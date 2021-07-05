/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  09/29/2020 04:43:58 PM
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
   int i, n, odd, squares;
   printf ( "This program prints a table of squares\n" );
   printf ( "Enter number of entries in table: " );
 scanf ( "%d", &n);  
    odd = 3;
    for (i = 1, squares = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i , squares);
        squares += odd;
    }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

