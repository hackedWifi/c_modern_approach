/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  What output does the following program produce? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:58:06 PM
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
   int i  = 0;

   for ( i = 10; i >= 1; i /= 2 ) {
       printf("%d ", i++); // infinite LOOP
   }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
