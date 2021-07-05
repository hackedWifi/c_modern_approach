/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  What output does the following program produce? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 02:58:17 PM
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
   
    int i = 9384;

    do {
        printf("%d ", i);
        i /= 10;
    } while ( i > 0 );				/* -----  end do-while  ----- */
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
