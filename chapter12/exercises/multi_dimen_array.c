/*
 * =====================================================================================
 *
 *       Filename:  multi_dimen_array.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  02/21/2021 09:09:39 PM
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
int main ( int argc, char *argv[] )
{
   int a[2][2][2] = {{{ 4, 5 }, {6, 7}},
                     {{8, 9}, {10, 11}}};
    printf("%d ",  ***a + 1 );

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
