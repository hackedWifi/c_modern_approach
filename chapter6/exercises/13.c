/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Rewirtethe following loop so that its body is empty. 
 *
 *        Version:  1.0
 *        Created:  09/25/2020 03:46:27 PM
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
   int n = 0;
   int m = 0;
   
   for ( n =0, m /= 2; m > 0; n++ ) {
       printf("%d %d", n , m);
   }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
