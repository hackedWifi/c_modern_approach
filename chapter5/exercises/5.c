/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Is the following (n >= 1 <= 10)  IF statement legal? 
 *
 *        Version:  1.0
 *        Created:  09/15/2020 03:34:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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
    int n = 10;
    // This expression is not legal due to n not being compared as follows
    // (n >=1 && n <=10)
    if (n >= 1 <= 10) {
        printf("n is between 1 and 10\n %d", n );
                }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
