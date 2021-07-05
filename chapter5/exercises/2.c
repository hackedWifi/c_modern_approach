/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Illustrates the logical operators. 
 *
 *        Version:  1.0
 *        Created:  09/15/2020 02:22:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    // a)
    int i = 10;
    int j = 5;
    int k = 0;
    printf("Value of a): %d", !(i < j) );
    // b)
    i = 2; j = 1;

    printf("Value of b): %d", !!i + !j );
    // c)
    i = 5; j = 5; k = -5;

    printf("Value of c): %d", i && j || k );
    // d)
    i = 1; j = 2; k = 3;
    printf("Value of d): %d", i < j || k ); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
