/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Translate the program fragment from exercise 1 into a single for
 *                  statement.
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:39:24 PM
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

    for ( int i = 1; i <= 128; i *= 2 ) {
        printf("%d ", i);
    }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



