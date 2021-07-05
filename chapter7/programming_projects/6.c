/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Print the size of integral data types in bytes using sizeof (int) 
 *
 *        Version:  1.0
 *        Created:  10/09/2020 09:56:44 PM
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
int main ( int argc, char *argv[] )
{
  printf("%lu\n", sizeof (int));
  printf("%lu\n", sizeof (long));
  printf("%lu\n", sizeof (short));
  printf("%lu\n", sizeof (float));
  printf("%lu\n", sizeof (double));
  printf("%lu\n", sizeof (long double));
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

