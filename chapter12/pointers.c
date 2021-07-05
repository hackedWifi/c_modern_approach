/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  01/29/2021 11:03:39 PM
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
#define N 3            /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int a[N] = {11,34,82} , *p = 0, sum = 0;

   for ( p = a; p < a + N;) { 
       /*sum += *p++;*/
       printf("%d\n", *p++);
   }
       /*printf("%d", sum);*/
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

