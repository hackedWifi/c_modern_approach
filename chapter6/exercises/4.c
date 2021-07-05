/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Which of the following statements are not equivalent to the other two? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:09:13 PM
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
   int i = 0;
   
   for ( i = 0; i < 10; i++ ) {
       printf("First statement:\n %d ", i );

   }
   for ( i = 0; i < 10; ++i) {
       printf("Second statement: %d ", i );

   }
   for ( i = 0; i++ < 10; ) {
       printf("Third statement: %d ", i );

   }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
