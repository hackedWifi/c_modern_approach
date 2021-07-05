/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Rewrite the fact function so tat it's no longer recursive. 
 *
 *        Version:  1.0
 *        Created:  12/04/2020 09:12:47 PM
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
    printf ( "%d \n", fact(4 )); 
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int fact(int n) 
{
    int i, fact = 1;
    if(n <= 1) return 1;
    for(i = 2; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

