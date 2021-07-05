/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  What does the following program produce? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:01:19 PM
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
    int i = 0; int j = 0; 
    for ( i = 5, j = i -1; i > 0, j > 0; --i, j = i - 1 ) {
        printf("%d  ", i);
    }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
