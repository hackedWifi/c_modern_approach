/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Rewrite the following function to use pointer arithmetic instead of
 *                  array subscripting. (In other words, eliminate the variable i and all
 *                  uses of the [] opereator.) Make as few changes as possible.
 *
 *        Version:  1.0
 *        Created:  02/14/2021 06:52:20 PM
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

void store_zeros(int a[], int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  store_zeros
 *  Description:  
 * =====================================================================================
 */
void store_zeros ( int a[], int n )
{
    int *p;

    for ( p = a; p < a + n; p++ ) {
        *p = 0;
    }
}		/* -----  end of function store_zeros  ----- */
