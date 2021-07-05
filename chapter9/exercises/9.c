/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  What will be the output of the following function? 
 *
 *        Version:  1.0
 *        Created:  11/30/2020 03:56:43 PM
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
 *         Name:  swap
 *  Description:  
 * =====================================================================================
 */
		/* -----  end of function swap  ----- */

void swap(int a, int b);
int main ( void )
{
    int i = 1, j = 2;
    swap(i, j);
    printf ( "i = %d, j = %d\n", i, j );
        return EXIT_SUCCESS;
}	

void swap ( int a, int b )
{
    int temp = a;
    a = b;
    b = temp;
}			/* ----------  end of function main  ---------- */
