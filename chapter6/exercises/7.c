/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Translate the program from exercise 2 into a single for statement. 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:43:59 PM
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
  
   
  for ( int i =9384; i > 0; i /= 10 ) {
       printf ( "%d \n", i );
  }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
