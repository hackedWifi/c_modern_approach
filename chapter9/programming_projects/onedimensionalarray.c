/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2020 10:23:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define MAX 10 
int main ( int argc, char *argv[] )
{
   int arr[MAX], i = 0, j= 0;

    
   for ( int i = 1; i < MAX ; i++ ) {
       arr[i] = 0;
   }

   for ( i = 0; i < 5; i++ ) {
       for ( j = 0; j < 2; j++ ) {
       printf ( "%d ", arr[i * 2 + j] );
       }
       printf ( "\n" );
   }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
