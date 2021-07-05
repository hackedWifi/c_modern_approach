/*
 * =====================================================================================
 *
 *       Filename:  reverse3.c
 *
 *    Description:  Reverses a seriies of numbers (pointers variables) 
 *
 *        Version:  1.0
 *        Created:  02/07/2021 06:16:10 AM
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
#define N 10            /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int a[N], *p;
   printf ( "Enter %d numbers: ", N );

   for ( p = a; p < a + N; p++ ) {
       scanf("%d", p);
   }
    printf("In reverse order: ");
   for ( p = a + N - 1; p >= a; p-- ) {
       printf(" %d", *p);
    
   }
    printf("\n");
    return 0;

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

