/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  What is the value of each of the following expressions in c89
 *
 *        Version:  1.0
 *        Created:  09/02/2020 04:44:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
  printf ( "Using C89\n" );
  printf ( "%d\n", 8 % 5 );
  printf ( "%d\n", -8 % 5 );
  printf ( "%d\n", 8 % -5 );
  printf ( "%d\n", -8 % -5 );
  printf ( "Using C99\n" );
  printf ( "%d\n", 8 % 5 );
  printf ( "%d\n", -8 % 5 );
  printf ( "%d\n", 8 % -5 );
  printf ( "%d\n", -8 % -5 );

  return EXIT_SUCCESS;
  
}				/* ----------  end of function main  ---------- */


