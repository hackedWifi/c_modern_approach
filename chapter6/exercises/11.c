/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  What output does the following program produce? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 04:20:33 PM
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
   int sum = 0;
   int i = 0;

   for ( i = 0; i < 10; i++ ) {
       if ( i % 2)
           continue;
       sum += i;
   printf( "i is: %d \n", i );
   }
   printf("Sum is: %d\n ", sum);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
