/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Print a table of squares using a for statement 
 *
 *        Version:  1.0
 *        Created:  10/07/2020 07:37:11 PM
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
  int i, n = 0;
  printf("This program prints a table of squares. \n");
    printf ( "Print number of entries in table: ");
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++ ) {
      printf("%10d%10d\n", i, i * i);
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
