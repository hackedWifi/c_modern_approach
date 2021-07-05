/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Condese the fact function the same way we condensed the power
 *                  function.
 *
 *        Version:  1.0
 *        Created:  12/04/2020 04:45:14 PM
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
int fact(int n);
int main ( int argc, char *argv[] )
{
   printf("%d ", fact(3)); 
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

