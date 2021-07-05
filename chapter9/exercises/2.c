/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Write a function check (x, y, n) that returns 1 if both x and y fall between 0 and
 *                  n - 1 inclusive. The function should return 0 otherwise.
 *
 *        Version:  1.0
 *        Created:  11/26/2020 04:47:49 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  check
 *  Description:  
 * =====================================================================================
 */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  check
 *  Description:  
 * =====================================================================================
 */
int check( int x, int y, int n);

int main ( int argc, char *argv[] )
{
    int x = 1;
    int y = 6;
    int n = 3;
    printf("%d ", check( x, y, n));

    return EXIT_SUCCESS;
}

int check ( int x, int y, int n )
{
  return ( x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1 ) ? 1 : 0;
}		/* -----  end of function check  ----- */

				/* ----------  end of function main  ---------- */
